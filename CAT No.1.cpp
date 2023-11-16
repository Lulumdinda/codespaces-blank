#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;
 
 if (num1 < num2 && num3){
    cout << "The first number is the smallest number.";
 }
    if (num2 < num1 && num3 ){
        cout << "The second number is the smallest number.";
    } else {
        cout << "The third number is the smallest number.";
    }

 return 0;
}








 
