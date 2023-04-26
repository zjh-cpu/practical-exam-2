// AirCraft.h
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
    private:
        int weight; 
        //weight of AirCraft
        float fuel; 
        // fuel percentage, initially 100%
        int numberOfFlights; 
        // initially 0

    public:
        AirCraft(); 
        // default constructor
        AirCraft(int w);
        // creates an Aircraft with weight w
        void refuel(); 
        // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); 
        // headwind in km/h and minutes (time flying)
        // getters and setters
        int get_weight();
        void set_weight(int w);
        float get_fuel();
        void set_fuel(float f);
        int get_numberOfFlights();
        void set_numberOfFlights(int n);
};

#endif
