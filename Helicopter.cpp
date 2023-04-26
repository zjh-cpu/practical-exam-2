// Helicopter.cpp
#include "Helicopter.h"

// default constructor
Helicopter::Helicopter() {}

// constructor with weight and name parameters
Helicopter::Helicopter(int w, string n) : AirCraft(w) {
    name = n;
}

// fly method
void Helicopter::fly(int headwind, int minutes) {
    // calculate the fuel percentage that will be used for the flight
    float fuelUsed = 0.0;
    if (headwind >= 40) {
        fuelUsed += 0.4 * minutes; // 0.4% for every minute with strong headwind
    } else {
        fuelUsed += 0.2 * minutes; // 0.2% for every minute otherwise
    }
    if (weight > 5670) {
        fuelUsed += 0.01 * (weight - 5670) * minutes; // 0.01% extra for every kg over 5670
    }

    // check if the flight would result in less than 20% fuel left
    if (fuel - fuelUsed < 20.0) {
        // do not take off and fly, print a message instead
        cout << "Sorry, this flight cannot be done with the current fuel level.\n";
    } else {
        // update the fuel percentage and the number of flights by calling the parent method
        AirCraft::fly(headwind, minutes);
    }
}

// getter for name
string Helicopter::get_name() {
    return name;
}

// setter for name
void Helicopter::set_name(string n) {
    name = n;
}
