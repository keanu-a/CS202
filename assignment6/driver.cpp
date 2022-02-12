// Keanu Aloua
// Redoing assignment 5 for CS 202
// Continued use of class building skills and practice inheritance skills

#include <iostream>
#include <vector>

#include "fish.h"
#include "cat.h"
#include "bird.h"

void getCat(Cat &cat);
void getFish(Fish &fish);
void getBird(Bird &bird);
void feedPet(Pet* pet);

int main() {
    int choice;
    Cat myCat;
    Fish myFish;
    Bird myBird;

    do {
        std::cout << "Welcome to the Pet Factory" << std::endl;
        std::cout << "==========================" << std::endl;
        std::cout << "          1. Cat          " << std::endl;
        std::cout << "          2. Fish         " << std::endl;
        std::cout << "          3. Bird         " << std::endl;
        std::cout << "          0. Exit         " << std::endl;
        std::cout << "==========================" << std::endl;

        std::cout << "Which one would you like? 1, 2, 3, or 0: ";
        std::cin >> choice;

        switch (choice) 
        {
            case 1:
                // Prompts user to create a cat
                getCat(myCat);
                feedPet(&myCat);

                break;

            case 2:
                // Prompts user to create a fish
                getFish(myFish);
                feedPet(&myFish);

                break;

            case 3:
                // Prompts user to create a bird
                getBird(myBird);
                feedPet(&myBird);

                break;

            case 0:
                break;

            default:
                std::cout << "Please enter a valid option" << std::endl;
        }

    } while (choice != 0);

    return 0;
}

void getCat(Cat &cat) {
    int legs;
    bool tail;
    std::string name;
    char choice;

    std::cout << "How many legs for the cat?: ";
    std::cin >> legs;

    std::cout << "Will the cat have a tail? Y or N: ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        tail = true;
    }
    else {
        tail = false;
    }

    std::cout << "What is the cat's name?: ";
    std::cin >> name;

    // Setting cat attributes
    cat.setLegs(legs);
    cat.setTail(tail);
    cat.setName(name);

    return;
}

void getFish(Fish &fish) {
    bool tail;
    std::string name;
    char choice;

    std::cout << "Will the fish have a tail? Y or N: ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        tail = true;
    }
    else {
        tail = false;
    }

    std::cout << "What is the fishes name?: ";
    std::cin >> name;

    // Setting fish attributes
    fish.setTail(tail);
    fish.setName(name);

    return;
}

void getBird(Bird &bird) {
    int legs;
    std::string name;
    char choice;

    std::cout << "How many legs for the bird?: ";
    std::cin >> legs;

    std::cout << "What is the bird's name?: ";
    std::cin >> name;

    // Setting fish attributes
    bird.setLegs(legs);
    bird.setName(name);

    return;
}

void feedPet(Pet* pet) {
    std::string food;

    std::cout << "What would you like to feed your pet?: ";
    std::cin >> food;

    // Accesses the virtual eat() function for the specific child class object
    pet->eat(food);

    std::cout << std::endl;

    return;
}
