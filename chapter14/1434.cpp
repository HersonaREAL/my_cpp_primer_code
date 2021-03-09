#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
class if_then_else {
public:
	if_then_else(int x):num(x){}
	int operator()(int a,int b,int c){
		if(a>num)
			return b;
		else
			return c;
	}
private:
	int num;
};
int main(){
	if_then_else isbig(7);
	cout<<isbig(8,6,3)<<" "<<isbig(7,6,3)<<endl;
}
