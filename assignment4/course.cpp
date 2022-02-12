// Course source file

#include <iostream>

#include "course.h"

Course::Course() {
    prefix = "";
    number = 0;
    name = "";
}

Course::Course(std::string newPrefix, int newNum, std::string newName) {
    setPrefix(newPrefix);
    setNumber(newNum);
    setName(newName);
}

std::string Course::getPrefix() {
    return prefix;
}

int Course::getNumber() {
    return number;
}

std::string Course::getName() {
    return name;
}

void Course::setPrefix(std::string newPrefix) {
    prefix = newPrefix;
    return;
}

void Course::setNumber(int newNum) {
    number = newNum;
    return;
}

void Course::setName(std::string newName) {
    name = newName;
    return;
}

void Course::print() {
    std::cout << prefix << number << ":  " << name << std::endl;
}