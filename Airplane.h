// Airplane.h
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"

class Airplane : public AirCraft {
    private:
        int numPassengers; // number of passengers on the Airplane

    public:
        Airplane(); // default constructor
        Airplane(int w, int p); // creates an Airplane with weight w and passengers p
        void reducePassengers(int x); // reduce passenger list by x
        int get_numPassengers(); // returns the number of passengers
        void fly(int headwind, int minutes); // overrides the fly method from AirCraft
};

#endif
