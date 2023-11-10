#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    double num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Use a switch case to determine the maximum
    int choice;
    cout << "Choose method to find maximum (1 or 2): \n"
              << "1. Using if-else\n"
              << "2. Using switch case\n";
    cin >> choice;

    switch (choice) {
        case 1:
            // Using if-else
            if (num1 > num2) {
                cout << "Maximum number: " << num1 << std::endl;
            } else {
                cout << "Maximum number: " << num2 << std::endl;
            }
            break;

        case 2:
            // Using switch case
            switch ((num1 > num2) + 2 * (num2 > num1)) {
                case 1:
                    cout << "Maximum number: " << num2 << std::endl;
                    break;

                case 2:
                    cout << "Maximum number: " << num1 << std::endl;
                    break;

                default:
                    cout << "The numbers are equal." << std::endl;
            }
            break;

        default:
            cout << "Invalid choice. Exiting program." << std::endl;
            return 1;
    }

    return 0;
}
