// Student header file
// Contains defintions for the Student class

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include "course.h"

class Student 
{
    int number;
    int numCourses;
    std::string firstName;
    std::string lastName;
    float gpa;
    std::vector<Course> schedule;

    public:
        Student();
        Student(int, std::string, std::string, float);
        
        int getNumber();
        int getNumCourses();
        std::string getFirstName();
        std::string getLastName();
        float getGpa();
        std::vector<Course> getSchedule();

        void setNumber(int);
        void setNumCourses(int);
        void setFirstName(std::string);
        void setLastName(std::string);
        void setGpa(float);
        void setSchedule(std::vector<Course>);

        void print();
        void printSchedule();
        bool addCourse(Course);
};

#endif