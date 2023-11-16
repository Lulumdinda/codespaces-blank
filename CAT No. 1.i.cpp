#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "Please input the year: \n";
    cin >> year;

    string message = (year +=4 )?"Leap year":"Not a leap year";

    cout << message;
    return 0;

} 