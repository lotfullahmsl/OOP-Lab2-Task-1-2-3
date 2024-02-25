#ifndef ELEPHANT_H
#define ELEPHANT_H
using namespace std;
#include "Animal1.h"
#include <iostream>

class Elephant : public Animal {
public:
    void makeSound() const override {
        cout << "\tElephant: Sloati!" << endl;
    }
};

#endif
