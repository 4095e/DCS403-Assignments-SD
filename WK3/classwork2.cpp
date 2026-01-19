#include <iostream>

using namespace std;

int main() {

    int number;
    printf("Enter a number: ");
    cin >> number;

    int counter = number;
    int sum = 0;

    while (counter > 0) {
        sum = sum + counter;
        counter--; 
    }

    printf("The sum is %d \n", sum);
    return 0;
}
