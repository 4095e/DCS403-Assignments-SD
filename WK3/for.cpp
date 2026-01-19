#include <iostream>

using namespace std;

int main() {

    int number;
    printf("Enter a number: ");
    cin >> number;

    int counter = number;
    int sum = 0;

    for (int counter = number; counter > 0; counter--) {
        sum = sum + counter;
        
    }

    printf("The sum is %d \n", sum);
    return 0;
}
