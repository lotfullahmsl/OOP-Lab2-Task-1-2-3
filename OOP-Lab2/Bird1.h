#ifndef BIRD_H
#define BIRD_H

#include "Animal1.h"
#include <iostream>
using namespace std;

class Bird : public Animal {
public:
    void makeSound() const override {
        cout << "\tBird: Chik chik!" << endl;
    }
};

#endif
