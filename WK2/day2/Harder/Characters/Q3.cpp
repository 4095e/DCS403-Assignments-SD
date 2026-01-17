#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string s;
    printf("Enter string: ");
    getline(cin,s);

    string result = "";

    for (char c : s) {
        if (isalpha(c)) {
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
