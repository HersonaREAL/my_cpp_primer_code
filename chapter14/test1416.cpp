#include"1416.h"
#include<iostream>
using namespace std;
int main() {
    StrVec a = {"abc", "cde", "fgi"};
    StrVec b = a;
    cout << (a == b) << " " << (a != b) << endl;
    StrVec c = {"abc", "cde", "fgik"};
    cout << (a == c) << endl;
}