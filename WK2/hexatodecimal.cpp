#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    char hex;
    cin >> hex;

   int ascii = int (hex);

    if (ascii >= 65){
     int value = (ascii - 65) + 10; 
     cout << value << endl;}

    else {
        cout << ascii << endl; 
    }
}