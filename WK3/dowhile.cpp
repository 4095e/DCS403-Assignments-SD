#include <iostream>

using namespace std;

int main ()
{

    int number;
    printf("Enter a number: ");
    cin >> number;

    int counter = number;
    int sum = 0;

    do 
    {
        sum = sum + counter;
        counter--; 
    }

    while (counter > 0);
    printf("The sum is %d \n", sum);
    return 0;   

}