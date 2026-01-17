#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string original_input = input;

    reverse(input.begin(), input.end());
    
    if (input == original_input) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
