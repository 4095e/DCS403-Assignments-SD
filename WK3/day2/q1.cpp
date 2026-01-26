# include <iostream>

using namespace std;

int main ()
{   
    int num;
    printf("Enter a number  ");
    cin >> num;

    for (int row = 0; row <= num; row++)
    {
        for (int rows = 0; rows <= num; rows++)
    {
        printf("*");
    }
    printf("\n");
    }
}