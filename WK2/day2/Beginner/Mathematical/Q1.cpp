#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "The square root of " << fabs(n) << " is " << sqrt(fabs(n)) << endl;
    cout << "2 raised to the power " << sqrt(fabs(n)) << " is " << pow(2, sqrt(fabs(n))) << endl;
    cout << "The absolute value of " << n << " is " << fabs(n) << endl;

    return 0;
}