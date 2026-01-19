#include <iostream>

using namespace std;

int main ()
{
    int variable ;
    printf("Enter a natural number: ");
    cin >> variable;

    int sum = 0; 

    for (int iterator = 1 ; iterator <= variable; iterator++)
    {
        sum = sum + iterator;
    }

    printf("The sum is : %d", sum);

}