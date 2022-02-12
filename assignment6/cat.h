// Cat child class header file

#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat: public Pet 
{
    public:
        Cat();
        Cat(int, bool, std::string);

        void pounce();
        void eat(std::string);
};

#endif