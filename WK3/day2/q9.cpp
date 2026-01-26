#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // Loop for each row
    for (int i = 0; i < n; i++) {

        // Print leading spaces for equilateral shape
        for (int space = 1; space <= n - i - 1; space++) {
            cout << "  ";
        }

        int value = 1; // First value in every row is 1

        // Print values in the current row
        for (int j = 0; j <= i; j++) {
            cout << value << "   ";

            // Compute next value using Pascal's Triangle formula
            value = value * (i - j) / (j + 1);
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
