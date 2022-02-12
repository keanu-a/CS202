// Pet class header file

#ifndef PET_H
#define PET_H

#include <iostream>

class Pet {
    int legs;
    bool tail;
    std::string name;

    public:
        Pet();
        Pet(int, bool, std::string);

        int getLegs();
        bool getTail();
        std::string getName();

        void setLegs(int);
        void setTail(bool);
        void setName(std::string);

        virtual void eat(const std::string) = 0;
};

#endif