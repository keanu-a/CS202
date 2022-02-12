// Bird child class 

#include "bird.h"

Bird::Bird() {
    setLegs(0);
    setTail(false);
    setName("");
}

Bird::Bird(int newLegs, bool newTail, std::string newName) {
    setLegs(newLegs);
    setTail(newTail);
    setName(newName);
}

void Bird::fly() 
{
    if (getTail()) {
        std::cout << "Fly like the wind!" << std::endl;
    }
    else {
        std::cout << "Hop along" <<std::endl;
    }

    return;
}

void Bird::eat(std::string food) {
    std::cout << getName() << " is pecking at my " << food << "." << std::endl;
}