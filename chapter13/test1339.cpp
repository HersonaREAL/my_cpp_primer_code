#include<iostream>
#include"1339.h"
using std::cout;
using std::endl;
int main()
{
    StrVec a;
    a.push_back("abc");
    a.push_back("cdef");
    a.push_back("sdfsdfsdf");
    a.push_back("fffffffff");
    for (auto it = a.begin(); it != a.end();++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}