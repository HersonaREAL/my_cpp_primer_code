#include<iostream>
#include"1340.h"
using std::cout;
using std::endl;
using std::string;
int main()
{
    StrVec b = {"abc","cde","fab"};
    b.push_back("kkkkkkkkkkkkkkkkkkkkkkkkk");
    StrVec a = b;

    for (auto it = a.begin(); it != a.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}