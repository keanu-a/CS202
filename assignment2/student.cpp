// Keanu Aloua
// December 14, 2021
// Source file for student.h

#include "student.h"

// DEFAULT CONSTRUCTOR
Student::Student() 
{
    number = 0;
    firstName = "";
    lastName = "";
    gpa = 0;
}

// PARAMETERIZED CONSTRUCTOR
Student::Student(int newNumber, string newFirstName, string newLastName, float newGpa)
{
    number = newNumber;
    firstName = newFirstName;
    lastName = newLastName;
    gpa = newGpa;
}

// GETTERS
int Student::getNumber()
{
    return number;
}

string Student::getFirstName()
{
    return firstName;
}

string Student::getLastName()
{
    return lastName;
}

float Student::getGpa()
{
    return gpa;
}

// SETTERS
void Student::setNumber(int newNumber)
{
    number = newNumber;
}

void Student::setFirstName(string newFirstName)
{
    firstName = newFirstName;
}

void Student::setLastName(string newLastName)
{
    lastName = newLastName;
}

void Student::setGpa(float newGpa)
{
    gpa = newGpa;
}

void Student::print()
{
    cout << left;
    cout.width(8); cout << firstName << left; // Field width of 8, left justified
    cout.width(8); cout << lastName << left;
    cout.width(6); cout << number << left;
    cout << endl;
}