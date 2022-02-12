// Fish child class header file

#ifndef FISH_H
#define FISH_H

#include "pet.h"

class Fish: public Pet
{
    public:
        Fish();
        Fish(int, bool, std::string);

        void swim();
        void eat(std::string);
};

#endif