#include <iostream>

using namespace std;

int main ()
{
    int num;
    printf ("Enter a number: ");
    cin >> num;

    int i = 1;

    do 
    {
        printf("%d * %d = %d\n",i,num, num*i );

        i++;
    }
    while (i < 11);
}