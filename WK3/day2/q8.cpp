#include <iostream>

using namespace std;

int main()
{
    int rows;
    printf("Enter the number of rows  ");
    cin >> rows;

    for(int row =1;row <= rows; row++)
    {
        for (int star = 1 ; star <= rows ;star++)
        {
            if ( row == 1 || row == rows || star == 1 || star == rows)
            {
                printf("* ");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}