// AirFleet.h
#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
    private:
        AirCraft **fleet; // an array of pointers to five AirCraft objects

    public:
        AirFleet(); // creates an air fleet containing pointers to five AirCraft objects
        AirCraft **get_fleet(); // returns the array of pointers to the five aircraft objects
};

#endif
