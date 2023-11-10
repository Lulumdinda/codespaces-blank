#include <iostream>
using namespace std;

int main() 
{ 
   int foodChoice;
   double totalCost = 0;

   cout << "Resturant menu: \n";
   cout << " 1. Combo A - $10.50\n";
   cout << "2. Combo B - $7.00\n";
   cout << "3. Combo C - $13.00\n";
   cout << "Enter your choice (1-3): ";
   cin >> foodChoice;

    switch (foodChoice) {
        case 1:
            totalCost = 10.50;
            cout << "You selected Combo A. Cost: $10.50\n";
            break;
        case 2:
            totalCost = 7.00;
            cout << "You selected Combo B. Cost: $7.00\n";
            break;
        case 3:
            totalCost = 13.00;
            cout << "You selected Combo C. Cost: $13.00\n";
            break;
        default:
            cout << "Invalid choice.\n";
            return 1; // Exit the program with an error code
    }

   cout << "Total Bill: $" << totalCost << std::endl;

    return 0;
}








