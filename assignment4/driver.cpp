// Keanu Aloua
// Redoing project 4 from CS202
// Continued use of makefiles, and class building skills.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "student.h"

#define MAX 7

int getStudents(int max, std::vector<Student> &students, std::string filename);
Student findMaxStudent(int maxStudents, std::vector<Student> students);
void printStudentTable(int numStudents, std::vector<Student> students);
int getMenuChoice();
int getStudentOption(int numStudents, std::vector<Student> students);
void addCourses(Student &student);

int main(int argc, char* argv[])
{
    int userChoice, numStudents, userOption, vecIndex;
    std::vector<Student> students;
    Student max;

    if (argc != 2) {
        std::cout << "Correct usage: ./student_mgmt example.txt" << std::endl;
        return 0;
    }

    std::string filename = argv[1]; // File to be read

    // Finds number of students read from the file
    numStudents = getStudents(MAX, students, filename);

    // Prompting the user to make choices until user chooses 0 to exit
    do {
        std::cout << std::endl;
        userChoice = getMenuChoice();

        switch (userChoice) {

            case 1:
                // Displaying the student names and numbers
                printStudentTable(numStudents, students);
                break;

            case 2:
                // Adds courses to a students schedule
                userOption = getStudentOption(numStudents, students);
                vecIndex = userOption - 1;

                addCourses(students[vecIndex]);
                break;

            case 3:
                // Prints the schedule from a student
                userOption = getStudentOption(numStudents, students);
                vecIndex = userOption - 1;

                students[vecIndex].printSchedule();
                break;

            case 4:
                // Finds the student with the highest GPA
                max = findMaxStudent(numStudents, students);

                std::cout << max.getFirstName() << " " << max.getLastName();
                std::cout << " has the highest GPA of " << max.getGpa() << "."; 
                std::cout << std::endl;
                break;

            case 0:
                // Exits the program
                break;

            default:
                std::cout << "Please enter a valid option." << std::endl;
        }

    } while (userChoice != 0);

    // End Program
    return 0;
}

int getStudents(int max, std::vector<Student> &students, std::string filename)
{
    std::fstream infile;
    infile.open(filename);

    int number;
    std::string first, last;
    float gpa;

    if(infile.fail()) 
    {
        std::cout << "\"" << filename << "\" can not be opened." << std::endl;
        return 1; // Returns 1 if file can not be opened
    }

    // Reads through the file
    while (infile >> number >> last >> first >> gpa) {
        Student student(number, last, first, gpa);

        students.push_back(student);
    }

    return students.size();
}

Student findMaxStudent(int maxStudents, std::vector<Student> students)
{
    Student max = students[0]; // Default to first student

    for (int i = 1; i < students.size(); i++) {
        if (students[i].getGpa() > max.getGpa()) {
            max = students[i];
        }
    }

    return max; // Returns student with highest gpa
}

void printStudentTable(int numStudents, std::vector<Student> students)
{
    std::cout << std::endl;
    std::cout << "First   Last    Number" << std::endl;
    std::cout << "======================" << std::endl;

    // Goes through the vector
    for (int i = 0; i < numStudents; i++) {
        students[i].print(); // Outputs first and last name

        std::cout.width(6); std::cout << students[i].getNumber() << std::left; // Outputs student number
        std::cout << std::endl;
    }

    std::cout << std::endl;

    return;
}

int getMenuChoice()
{
    int choice;

    // Main Menu
    std::cout << "STUDENT MANAGEMENT SYSTEM" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "1.      Display Students" << std::endl;
    std::cout << "2.      Add Courses" << std::endl;
    std::cout << "3.      Display Student Schedule" << std::endl;
    std::cout << "4.      Find Highest GPA Student" << std::endl;
    std::cout << "0.      EXIT" << std::endl;

    // Receive input from user
    std::cout << "Your choice: ";
    std::cin >> choice;

    std::cout << std::endl;

    return choice;
}

int getStudentOption(int numStudents, std::vector<Student> students)
{
    int option;

    // Options menu
    std::cout << "Option  First   Last  " << std::endl;
    std::cout << "======================" << std::endl;

    for (int i = 0; i < numStudents; i++) {
        std::cout.width(8);
        std::cout << i + 1 << std::left;
        students[i].print();
        std::cout << std::endl;
    }

    std::cout << "Choose the student option number: ";
    std::cin >> option;

    return option;
}

void addCourses(Student &student)
{
    // NOTE: Passing by reference so we can update the actual element in the vector

    int studentCourses = student.getNumCourses();
    std::string prefix, name;
    int number;

    // If the student already has a full schedule then user can't add
    if (studentCourses >= 7) {
        std::cout << "This student's schedule is full." << std::endl;
        return;
    }

    // Prompt User
    int addCourses;
    std::cout << "How many courses would you like to add? ";
    std::cin >> addCourses;

    // If the user inputs more courses to add than the student can carry, then returns
    if (studentCourses + addCourses > 7) {

        // Error message
        std::cout << student.getFirstName() << " " << student.getLastName();
        std::cout << " already has " << studentCourses << " out of 7 courses.";
        std::cout << std::endl;
        return;
    }

    // If the above 2 conditions pass, then we ask user for input
    for (int i = 0; i < addCourses; i++) {
        std::cout << "Enter the course prefix, number, and name: ";
        std::cin >> prefix >> number;
        std::getline(std::cin, name);
        Course course(prefix, number, name);
        student.addCourse(course);
    }

    return;
}