// main-2-1.cpp
#include <iostream>
#include "Helicopter.h"

using namespace std;

int main() {
    // create a Helicopter object with weight 6000 kg and name "Heli1"
    Helicopter h(6000, "Heli1");
    // print its attributes
    cout << "Name: " << h.get_name() << "\n";
    cout << "Weight: " << h.get_weight() << " kg\n";
    cout << "Fuel: " << h.get_fuel() << "%\n";
    cout << "Number of flights: " << h.get_numberOfFlights() << "\n";
    cout << "\n";

    // fly for 15 minutes with a headwind of 30 km/h
    h.fly(30, 15);
    // print its attributes again
    cout << "Name: " << h.get_name() << "\n";
    cout << "Weight: " << h.get_weight() << " kg\n";
    cout << "Fuel: " << h.get_fuel() << "%\n";
    cout << "Number of flights: " << h.get_numberOfFlights() << "\n";
    cout << "\n";

    // fly for another 15 minutes with a headwind of 50 km/h
    h.fly(50, 15);
    // print its attributes again
    cout << "Name: " << h.get_name() << "\n";
    cout << "Weight: " << h.get_weight() << " kg\n";
    cout << "Fuel: " << h.get_fuel() << "%\n";
    cout << "Number of flights: " << h.get_numberOfFlights() << "\n";
    
}
