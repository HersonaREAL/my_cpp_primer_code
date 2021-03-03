#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
#include<cstdlib>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
class numbered{
public:
	friend void f(numbered &s);
	numbered(){
		mysn = rand();
	}
	numbered(const numbered &src){
		mysn = rand();
	}
private:
	int mysn;
};
void f(numbered &s){
	cout<<s.mysn<<endl;
}
int main(){
	srand((unsigned)time(NULL));
	numbered a,b = a,c = b;
	f(a);f(a);f(a);
}
