// Airplane.cpp
#include "Airplane.h"

// default constructor
Airplane::Airplane() {}

// constructor with weight and passengers parameters
Airplane::Airplane(int w, int p) : AirCraft(w) {
    numPassengers = p;
}

// reducePassengers method
void Airplane::reducePassengers(int x) {
    // subtract x from the number of passengers
    numPassengers -= x;
    // check if the number of passengers is below zero
    if (numPassengers < 0) {
        // set it to zero
        numPassengers = 0;
    }
}

// get_numPassengers method
int Airplane::get_numPassengers() {
    return numPassengers;
}

// fly method
void Airplane::fly(int headwind, int minutes) {
    // calculate the fuel percentage that will be used for the flight
    float fuelUsed = 0.0;
    if (headwind >= 60) {
        fuelUsed += 0.5 * minutes; // 0.5% for every minute with strong headwind
    } else {
        fuelUsed += 0.3 * minutes; // 0.3% for every minute otherwise
    }
    fuelUsed += 0.001 * numPassengers * minutes; // 0.001% extra for every passenger

    // check if the flight would result in less than 20% fuel left
    if (fuel - fuelUsed < 20.0) {
        // do not take off and fly, print a message instead
        cout << "Sorry, this flight cannot be done with the current fuel level.\n";
    } else {
        // update the fuel percentage and the number of flights by calling the parent method
        AirCraft::fly(headwind, minutes);
    }
}
