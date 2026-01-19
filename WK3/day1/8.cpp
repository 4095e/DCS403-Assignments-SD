#include <iostream>

using namespace std;

int main ()
{
    int rows ;
    printf("Enter a natural number: ");
    cin >> rows;
    int number = 1;
    printf("\n");

    for (int row = 1 ; row <= rows; row++)
    {
        for (int star = 1 ; star <= row; star++)
            {
                printf("%d",number);
                number++;
            }
            printf("\n");
    }
    printf("\n");

  
}