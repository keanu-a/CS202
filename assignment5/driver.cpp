// Keanu Aloua
// Redoing assignment 5 for CS 202
// Continued use of class building skills and practice inheritance skills

#include <iostream>

#include "fish.h"
#include "cat.h"
#include "bird.h"

int main() {
    Cat myCat;

    Fish myFish;

    Bird myBird(2, false, "Dodo");

    Fish yourFish = myFish;

    myCat.pounce();
    myFish.swim();
    myBird.fly();

    myCat.setLegs(4);
    myFish.setTail(true);
    myBird.setTail(true);

    myCat.pounce();
    myFish.swim();
    myBird.fly();

    return 0;
}