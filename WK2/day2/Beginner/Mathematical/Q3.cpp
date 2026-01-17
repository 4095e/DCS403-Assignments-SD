#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter the first integer: ";
    cin >> a;

    cout << "Enter the second integer: ";
    cin >> b;

    cout << "The larger number is " << fmax(a,b) << endl;
    cout << "The smaller number is " << fmin(a,b) << endl;
    return 0; 
}