#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int randomValue = rand() % 26;  // 0–25
    char character = 'A' + randomValue;  // Convert to A–Z

    cout << "Random Character: " << character << endl;

    return 0;
}
