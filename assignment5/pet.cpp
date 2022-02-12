// Pet class source file

#include "pet.h"

Pet::Pet() {
    legs = 0;
    tail = false;
    name = "";
}

Pet::Pet(int newLegs, bool newTail, std::string newName) {
    legs = newLegs;
    tail = newTail;
    name = newName;
}

int Pet::getLegs() {
    return legs;
}

bool Pet::getTail() {
    return tail;
}

std::string Pet::getName() {
    return name;
}

void Pet::setLegs(int newLegs) {
    legs = newLegs;
    return;
}

void Pet::setTail(bool newTail) {
    tail = newTail;
    return;
}

void Pet::setName(std::string newName) {
    name = newName;
    return;
}
