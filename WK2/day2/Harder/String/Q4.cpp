#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
   string s;
   printf ("Enter a string: ");
   getline (cin,s);
    string result = "";

    for (char c : s) {
        if (!isVowel(c)) {
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
