#include <iostream>
using namespace std;

int main() {
    // Variables
 Tank-of-Gas
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

    int totalCustomers = 16500;     // Total number of customers surveyed
    double percentBuyEnergyDrinks = 0.15;   // 15% of customers buy energy drinks
    double percentPreferCitrus = 0.58;      // 58% of energy drink buyers prefer citrus

    // Calculating the number of customers who buy energy drinks
    int numEnergyDrinkCustomers = totalCustomers * percentBuyEnergyDrinks;

    // Calculating the number of customers who prefer citrus flavor
    int numCitrusCustomers = numEnergyDrinkCustomers * percentPreferCitrus;

    // Display the results
    cout << "Number of customers who purchase one or more energy drinks per week: "
         << numEnergyDrinkCustomers << endl;
    cout << "Number of customers who prefer citrus-flavored energy drinks: "
         << numCitrusCustomers << endl;
 main

    return 0;
}