#ifndef LION_H
#define LION_H

#include "Animal1.h"
#include <iostream>
using namespace std;

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "\tLion: Grunts!" << endl;
    }
};

#endif
