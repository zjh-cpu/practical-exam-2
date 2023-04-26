// Helicopter.h
#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

using namespace std;

class Helicopter : public AirCraft {
    private:
        string name; // name of the Helicopter

    public:
        Helicopter(); // default constructor
        Helicopter(int w, string n); // creates a Helicopter with weight w and name n
        void fly(int headwind, int minutes); // overrides the fly method from AirCraft
        // getters and setters
        string get_name();
        void set_name(string n);
};

#endif
