#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Length of string: " << input.length() << endl;
    return 0;
}