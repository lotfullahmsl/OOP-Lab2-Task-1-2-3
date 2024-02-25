#include "Main1.h"
#include <limits>

using namespace std;

void hearSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    int choice;
    do {
        cout << "\n\tWhich Animal's Sound You Want to Hear:" << endl;
        cout << "\t1. Lion" << endl;
        cout << "\t2. Elephant" << endl;
        cout << "\t3. Monkey" << endl;
        cout << "\t4. Bird" << endl;


        cout << "\tEnter your choice (1-4): ";
        cin >> choice;

        // Clear input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        Animal* animalPtr;
        switch (choice) {
        case 1:
            cout << endl;
            hearSound(Lion());
            break;
        case 2:
            cout << endl;
            hearSound(Elephant());
            break;
        case 3:
            cout << endl;
            hearSound(Monkey());
            break;
        case 4:
            hearSound(Bird());
            break;
        default:
            cout << "\n\tInvalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (cin.fail() || choice < 1 || choice > 4);

    return 0;
}