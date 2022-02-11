#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student 
{
	int number;
	string firstName;
	string lastName;
	float gpa;

	public:
	
	Student(); 
	
	Student(int number, string firstName, string lastName, float gpa); 

	int getNumber();
	string getFirstName();
	string getLastName();
	float getGpa();
	
	void setNumber(int);
	void setFirstName(string);
	void setLastName(string);
	void setGpa(float);
	
	void print();
	
	
};

#endif
