#include <iostream>
using namespace std;

int main() {
    string s;
    printf("Enter string: ");
    getline(cin,s);
    
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (c == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << count << endl;
    return 0;
}