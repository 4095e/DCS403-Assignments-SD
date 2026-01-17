#include <iostream>

using namespace std;

int main ()

{
    int number1;
    int number2;

    cout << "Enter the first number  ";
    cin >> number1;
    cout << endl;

    cout << "Enter the second number  ";
    cin >> number2;
    cout << endl;

    if (number1 > number2)
    {
        printf ("%d is the larger number \n", number1);
    }

    else 
    {
        printf ("%d is the larger number \n", number2); 
    }
}