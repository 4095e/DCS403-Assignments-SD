#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input1;
    cout << "Enter the first string: ";
    getline(cin, input1);

    string input2;
    cout << "Enter the second string: ";
    getline(cin, input2);

    cout << input1 + " " + input2 << endl;
}
