#include <iostream>
using namespace std;

int main() {
    // Variables
    double tankCapacity = 20.0; // 20-gallon gas tank
    double townMPG = 23.5;      // Average miles per gallon in town
    double highwayMPG = 28.9;   // Average miles per gallon on highway

    // Calculating the distance for town and highway
    double townDistance = tankCapacity * townMPG;
    double highwayDistance = tankCapacity * highwayMPG;

    // Display the results
    cout << "Distance the car can travel on one tank of gas:" << endl;
    cout << "In town: " << townDistance << " miles" << endl;
    cout << "On the highway: " << highwayDistance << " miles" << endl;

    return 0;
}