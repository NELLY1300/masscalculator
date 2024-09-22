#include <iostream>
using namespace std;

// Function to calculate weight
double calculateWeight(double mass) {
    const double gravity = 9.8; // Acceleration due to gravity in m/s^2
    return mass * gravity;
}

int main() {
    double mass;
    cout << "Enter the mass (M) of the object (in kg): ";
    cin >> mass;

    double weight = calculateWeight(mass);
    cout << "The weight of the object is: " << weight << " N" << endl;

    return 0;
}
