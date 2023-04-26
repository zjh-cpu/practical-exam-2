// main-1-1.cpp
#include <iostream>
#include "AirCraft.h"

using namespace std;

int main() {
    // create an AirCraft object with weight 500 kg
    AirCraft a(500);
    // print its attributes
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    cout << "\n";

    // fly for 10 minutes with a headwind of 20 km/h
    a.fly(20, 10);
    // print its attributes again
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    cout << "\n";

    // refuel the aircraft
    a.refuel();
    // print its attributes again
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    
}
