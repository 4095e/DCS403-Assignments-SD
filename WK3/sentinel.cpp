#include <iostream>

using namespace std;

int main() {

    const int SENTINEL_VALUE = 0;

    int number;
    printf("Enter a number: ");
    cin >> number;

    while (number != SENTINEL_VALUE) 
    {
        printf("Input was %d\n",number);
        printf("Enter a number: ");
         cin >> number;
    }

    printf("Program ended");
    return 0;
}
