// Course header file
// This file will contain definition for course class

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course 
{
    std::string prefix;
    int number;
    std::string name;

    public:
        Course();
        Course(std::string, int, std::string);
        
        std::string getPrefix();
        int getNumber();
        std::string getName();

        void setPrefix(std::string);
        void setNumber(int);
        void setName(std::string);

        void print();
};

#endif