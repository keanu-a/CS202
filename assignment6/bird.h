// Bird child class header file

#ifndef BIRD_H
#define BIRD_H

#include "pet.h"

class Bird: public Pet
{
    public:
        Bird();
        Bird(int, bool, std::string);

        void fly();
        void eat(std::string);
};

#endif