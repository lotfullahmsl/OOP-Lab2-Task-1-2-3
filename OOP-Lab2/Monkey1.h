#ifndef MONKEY_H
#define MONKEY_H

#include "Animal1.h"
#include <iostream>
using namespace std;

class Monkey : public Animal {
public:
    void makeSound() const override {
        cout << "\tMonkey: Ooohh!" << endl;
    }
};

#endif
