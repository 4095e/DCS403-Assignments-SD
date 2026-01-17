#include <iostream>
using namespace std;

int main() {

    string s1;
    printf("Enter string1: ");
    getline(cin,s1);

    string s2;
    printf("Enter string2: ");
    getline(cin,s2);

    if (s1.length() != s2.length()) {
        cout << "Not anagrams";
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams.";
    return 0;
}
