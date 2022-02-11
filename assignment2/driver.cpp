// Keanu Aloua
// December 14, 2021
// Reviewing CS 202 Project #2
// This program will be practice for class building skills.

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

#include "student.h"

int getStudents(vector<Student> students, string filename);
string findMaxStudent(int studAmount, vector<Student> students);
void printStudentTable(int studAmount, vector<Student> students);

int main(int argc, char* argv[]) 
{
    vector<Student> students;
    int studAmount;

    if (argc != 2)
    {
        cout << "correct usage: " << endl;
        cout << "./student_mgmt filename" << endl;
        return 0;
    }

    string filename = argv[1];

    studAmount = getStudents(students, filename);

    return 0;


}

//-------------------------------------------------------//
//                       FUNCTIONS                       //
//-------------------------------------------------------//

int getStudents(vector<Student> students, string filename) 
{
    string sFirst, sLast, maxStudent;
    int count = 0, sNum;
    float sGPA;

    ifstream infile;
    infile.open(filename);

    if(infile.fail()) 
    {
        cout << "\"" << filename << "\" can not be opened." << endl;
        return 1;
    }

    while(infile >> sNum >> sLast >> sFirst >> sGPA)
    {
        students.push_back(Student(sNum, sFirst, sLast, sGPA));
        count++;
    }

    infile.close();

    // Prints the table of students
    printStudentTable(count, students);
    for(int i = 0; i < count; i++)
    {
        students[i].print();
    }

    // Finds the maximum student
    maxStudent = findMaxStudent(count, students);

    cout << endl;
    cout << "The student with the highest gpa is: " << maxStudent << endl;

    return count;


}

string findMaxStudent(int studAmount, vector<Student> students) 
{
    string maxStudent;
    float maxGpa = students[0].getGpa();
    float nextGpa;

    for(int i = 0; i < studAmount; i++)
    {
        nextGpa = students[i].getGpa();
        if(maxGpa < nextGpa)
        {
            maxGpa = nextGpa;
            maxStudent = students[i].getFirstName() + " " + students[i].getLastName();
        }
    }

    return maxStudent;


}

void printStudentTable(int studAmount, vector<Student> students) 
{
    cout << "First   Last    Number" << endl;
    cout << "======================" << endl;

    return;


}