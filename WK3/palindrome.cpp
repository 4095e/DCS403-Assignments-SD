#include <iostream>
using namespace std;

int main()
{
    int number;
    int digit;
    int check_digits = 0;  

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        digit = number % 10;                
        check_digits = check_digits * 10 + digit; 
        number = number / 10;               
    }

    cout << "The reversed number is " << check_digits << endl;

    if (check_digits == number)
    {
        printf("The number is palindrome");

    }

    else 
    {
        printf("The number isn't a palindrome");
    }

    return 0;
}
