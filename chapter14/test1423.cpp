#include"1423.h"
#include<iostream>
using namespace std;

int main(){
    StrVec a = {"ggg", "sss"};
    a = {"fffff", "sdfsdfsdf"};
    (a += {"fdsfsfsdf", "ddddd"}) += {"end"};
    for (auto it = a.begin(); it != a.end();++it)
        cout << *it << " ";
    cout << endl;
}
