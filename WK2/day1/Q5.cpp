#include <iostream>

using namespace std;

int main()
{
    int number1;
    cout << "Enter the first number: ";
    cin >> number1;

    int number2;
    cout << "Enter the second number: ";
    cin >> number2;

    (number1 > number2)? printf("%d is the bigger number",number1) : printf ("%d  is the bigger number", number2);


}