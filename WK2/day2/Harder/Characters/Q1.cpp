#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string s;
    printf("Enter string: ");
    getline(cin,s);
    
    int freq[26] = {0};

    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ":" << freq[i] << " ";
        }
    }
    printf("\n");
    return 0;
}
