#include <iostream>
using namespace std;

int main() {
    // Variables
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

    return 0;
}