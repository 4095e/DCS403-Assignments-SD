#include <iostream>

using namespace std;

int main ()
{
    int num ;
    printf("Enter a number: ");
    cin >> num;
    int fact = 1;
   

    for (int iterator = 1 ; iterator <= num; iterator++)
    {
        fact = fact * iterator;
    }

    printf("The factorial of %d is : %d\n",num,fact);
}