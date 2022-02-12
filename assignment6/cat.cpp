// Cat child class source file

#include "cat.h"

Cat::Cat() {
    setLegs(0);
    setTail(false);
    setName("");
}

Cat::Cat(int newLegs, bool newTail, std::string newName) {
    setLegs(newLegs);
    setTail(newTail);
    setName(newName);
}

void Cat::pounce() 
{
    if (getLegs() > 2) {
        std::cout << "RAWR!" << std::endl;
    }
    else {
        std::cout << "meow" << std::endl;
    }

    return;
}

void Cat::eat(std::string food) {
    std::cout << getName() << " is devouring my " << food << "." << std::endl;

    return;
}