#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int main() {
    double a, b, c;
    double D, x1, x2, realPart, imaginaryPart;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;

    // Calculate discriminant
    D = b * b - 4 * a * c;

    // Condition for real and distinct roots
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2;
    }
    // Condition for real and equal roots
    else if (D == 0) {
        x1 = -b / (2 * a);
        cout << "Roots are real and equal: " << x1 << " and " << x1;
    }
    // Condition for imaginary roots
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary:\n";
        cout << realPart << " + " << imaginaryPart << "i and ";
        cout << realPart << " - " << imaginaryPart << "i";
    }

    return 0;
}
