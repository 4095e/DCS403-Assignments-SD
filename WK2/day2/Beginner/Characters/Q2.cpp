#include <iostream>

using namespace std;

int main ()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (isupper(letter))
        cout << char(tolower(letter))  << endl;
    else if (islower(letter))
        cout << char(toupper(letter)) << endl;
    else
        cout << " Invalid Input" << endl;
}