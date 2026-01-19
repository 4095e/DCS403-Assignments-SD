#include <iostream>

using namespace std;

int main ()
{
    int variable ;
    printf("Enter a number: ");
    cin >> variable;

    
    int num = variable;
    int digit;
    int digit_count=0;
    do 
    {        
        digit = num % 10;
        num = num/10;
        digit_count++;
    }
    while(num != 0);

    printf("The number of digits: %d\n", digit_count);
}