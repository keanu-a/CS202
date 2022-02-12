// Fish child class source file

#include "fish.h"

Fish::Fish() {
    setLegs(0);
    setTail(false);
    setName("");
}

Fish::Fish(int newLegs, bool newTail, std::string newName) {
    setLegs(newLegs);
    setTail(newTail);
    setName(newName);
}

void Fish::swim() {
    if (getTail()) {
        std::cout << "Just keep swimming!" << std::endl;
    }
    else {
        std::cout << "glub glub" << std::endl;
    }

    return;
}