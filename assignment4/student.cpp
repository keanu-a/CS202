// Student Source File

#include <iostream>
#include <vector>
#include "student.h"

Student::Student() {
    number = 0;
    firstName = "";
    lastName = "";
    gpa = 0;
    schedule.clear();
    numCourses = schedule.size();
}

Student::Student(int newNum, std::string newFName, std::string newLName, float newGpa) {
    number = newNum;
    firstName = newFName;
    lastName = newLName;
    gpa = newGpa;
}

int Student::getNumber() {
    return number;
}

int Student::getNumCourses() {
    return numCourses;
}

std::string Student::getFirstName() {
    return firstName;
}

std::string Student::getLastName() {
    return lastName;
}

float Student::getGpa() {
    return gpa;
}

std::vector<Course> Student::getSchedule() {
    return schedule;
}

void Student::setNumber(int newNumber) {
    number = newNumber;
    return;
}

void Student::setFirstName(std::string newFirstName) {
    firstName = newFirstName;
    return;
}

void Student::setLastName(std::string newLastName) {
    lastName = newLastName;
    return;
}

void Student::setGpa(float newGpa) {
    gpa = newGpa;
    return;
}

void Student::print() {
    std::cout << std::left;
    std::cout.width(8); std::cout << firstName << std::left; // Field width of 8, left justified
    std::cout.width(8); std::cout << lastName << std::left;
}

void Student::printSchedule() {
    // Displays each course in schedule

    if (schedule.size() == 0) {
        std::cout << "This student has no courses." << std::endl;
        return;
    }

    for (int i = 0; i < schedule.size(); i++) {
        schedule[i].print();
    }

    return;
}

bool Student::addCourse(Course newCourse) {
    // Students can have up to 7 courses

    // If course was added to schedule, then return true
    if (numCourses <= 7) {
        schedule.push_back(newCourse);
        numCourses = schedule.size();

        return true;
    }

    return false;
}