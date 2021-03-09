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
class eq { 
public:
	eq(int x):val(x){}
	bool operator()(int x){
		return x==val;
	}
private:
	int val;
};
int main(){
	eq myeq(3);
	vector<int> v = {1,1,1,2,2,3,3,4,4,5,5,6,6,7,7,7};
	std::replace_if(v.begin(),v.end(),myeq,114514);
	for(auto i :v)
		cout<<i<<" ";
	cout<<endl;
}
