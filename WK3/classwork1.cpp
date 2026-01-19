#include <iostream>

using namespace std;

int main() {

    int number;
    printf("Enter a number: ");
    cin >> number;

    int counter = number;

    while (counter > 0) {

        number = number +1;
        counter--; 

    }

    printf("The sum is %d \n",number);
    return 0;
}