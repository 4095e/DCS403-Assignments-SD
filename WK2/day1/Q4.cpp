#include <iostream>

using namespace std;

int main()
{   
    int number;
    printf("Enter a number: ");
    cin >> number;

    if (number > 0) 
    
    {

        if (number % 2 == 0) 
        {
            printf("The number is even and positive.\n");
        } 
        else 
        {
            printf("The number is odd and positive.\n");
        }

    } 
    else if (number < 0)

    {
        printf("The number is negative.\n");
    } 

    else 

    {
        printf("The number is zero.\n");
    }


    return 0;
}
