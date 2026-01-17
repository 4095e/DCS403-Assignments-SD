#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s ;
    printf("Enter the string: ");
    getline(cin,s);
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (count % 2 == 0)
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
            count++;
        }
    }

    cout << s;
    return 0;
}
