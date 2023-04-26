// AirCraft.cpp
#include "AirCraft.h"

// default constructor
AirCraft::AirCraft() {}

// constructor with weight parameter
AirCraft::AirCraft(int w) {
    weight = w;
    fuel = 100.0;
    numberOfFlights = 0;
}

// refuel method
void AirCraft::refuel() {
    fuel = 100.0;
}

// fly method
void AirCraft::fly(int headwind, int minutes) {
    // increase the number of flights by 1
    numberOfFlights++;
    // update the fuel percentage based on some formula (you can change this as needed)
    fuel -= (weight * minutes * (1 + headwind / 100.0)) / 10000.0;
}

// getter for weight
int AirCraft::get_weight() {
    return weight;
}

// setter for weight
void AirCraft::set_weight(int w) {
    weight = w;
}

// getter for fuel
float AirCraft::get_fuel() {
    return fuel;
}

// setter for fuel
void AirCraft::set_fuel(float f) {
    fuel = f;
}

// getter for number of flights
int AirCraft::get_numberOfFlights() {
    return numberOfFlights;
}

// setter for number of flights
void AirCraft::set_numberOfFlights(int n) {
    numberOfFlights = n;
}
