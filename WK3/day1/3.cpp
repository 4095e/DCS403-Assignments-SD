#include <iostream>

using namespace std;

int main ()
{
    int variable ;
    printf("Enter a  number: ");
    cin >> variable;

    int sum = 0; 
    int num = variable;
    int digit;

    while(num != 0)
    {
        digit = num % 10;
        sum   = sum *10 +digit;
        num = num/10;
      
    }

    printf("The reversed number is : %d\n", sum);
}