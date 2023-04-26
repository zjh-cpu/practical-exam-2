// AirFleet.cpp
#include "AirFleet.h"

// constructor
AirFleet::AirFleet() {
    // allocate memory for the array of pointers
    fleet = new AirCraft*[5];
    // create and add the objects to the array in the same order as specified
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirCraft(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);
}

// get_fleet method
AirCraft **AirFleet::get_fleet() {
    return fleet;
}
