#include <iostream>
using namespace std;
int globalVar=10;
void variableDemo(){ int localVar=5; static int staticLocal=0; staticLocal++; cout<<"Local: "<<localVar<<", Static: "<<staticLocal<<endl; }
int main(){ cout<<"Global: "<<globalVar<<endl; variableDemo(); variableDemo(); return 0; }
