#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int rows;
    printf ("Enter the number of rows: ");
    cin >> rows;

    int spaces = floor(rows/2);

    for (int row = 1 ; row <rows;row++)
    {
    if (row%2 != 0)
    {
        for (int space = spaces; space >0 ;space-- )
        {
            printf(" ");
        }

        for (int star = 1 ; star <= row;star++)
        {
            printf ("*");
        }

        spaces--;
        printf("\n");
    }

    else
    {
        continue;
    }

    }

    spaces = 0;

    for ( int row = rows ; row > 0;row--)
    {
    if (row%2 != 0)
    {
        for (int space = 1; space <=spaces ;space++ )
        {
            printf(" ");
        }

        for (int star = 1 ; star <= row;star++)
        {
            printf ("*");
        }

        spaces++;
        printf("\n");
    }

    else
    {
        continue;
    }

    }
}