#include <iostream>

using namespace std;

int main ()
{
    int num;
    printf("Enter thenumber of rows  ");
    cin >> num;

    for (int row = num; row >= 1; row--)
    {
        

        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        
        printf("\n");
    }



}