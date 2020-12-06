#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int a[] = {1,1,2,2,2,3,3,4,5,3};
	vector<int> b(std::begin(a),std::end(a));
	for(auto i : b)
		cout<<i<<" ";
	cout<<endl;	
}
