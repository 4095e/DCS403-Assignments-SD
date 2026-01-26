#include <iostream>
#include <string>
using namespace std;
void display(const string &msg){ cout<<msg<<endl; }
int main(){ display("This string cannot be modified inside the function."); return 0; }
