// main-2-2.cpp
#include <iostream>
#include "Airplane.h"

using namespace std;

int main() {
    // create an Airplane object with weight 10000 kg and 200 passengers
    Airplane a(10000, 200);
    // print its attributes
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    cout << "Number of passengers: " << a.get_numPassengers() << "\n";
    cout << "\n";

    // fly for 60 minutes with a headwind of 50 km/h
    a.fly(50, 60);
    // print its attributes again
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    cout << "Number of passengers: " << a.get_numPassengers() << "\n";
    cout << "\n";

    // reduce the number of passengers by 50
    a.reducePassengers(50);
    // print its attributes again
    cout << "Weight: " << a.get_weight() << " kg\n";
    cout << "Fuel: " << a.get_fuel() << "%\n";
    cout << "Number of flights: " << a.get_numberOfFlights() << "\n";
    cout << "Number of passengers: " << a.get_numPassengers() << "\n";
    
}
