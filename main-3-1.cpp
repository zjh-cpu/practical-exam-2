// main-3-1.cpp
#include <iostream>
#include "AirFleet.h"

using namespace std;

int main() {
    // create an AirFleet object
    AirFleet af;
    // get the array of pointers to the aircraft objects
    AirCraft **fleet = af.get_fleet();
    // loop through the array and print the attributes of each object
    for (int i = 0; i < 5; i++) {
        cout << "Aircraft " << i + 1 << ":\n";
        cout << "Weight: " << fleet[i]->get_weight() << " kg\n";
        cout << "Fuel: " << fleet[i]->get_fuel() << "%\n";
        cout << "Number of flights: " << fleet[i]->get_numberOfFlights() << "\n";
        // check if the object is an Airplane or a Helicopter and print the specific attribute accordingly
        if (dynamic_cast<Airplane*>(fleet[i])) {
            cout << "Number of passengers: " << dynamic_cast<Airplane*>(fleet[i])->get_numPassengers() << "\n";
        } else if (dynamic_cast<Helicopter*>(fleet[i])) {
            cout << "Name: " << dynamic_cast<Helicopter*>(fleet[i])->get_name() << "\n";
        }
        cout << "\n";
    }
    
}
