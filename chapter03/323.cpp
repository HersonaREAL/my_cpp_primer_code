#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<int> a{1,2,4,8,16,32,64,128,256,512};
	for(auto it = a.begin();it!=a.end();++it){
		cout<< *it <<" ";
		(*it) *=2;
	}
	cout << endl;
	for(auto it = a.cbegin();it!=a.cend();++it)
		cout<<*it<<" ";
	cout<<endl;

}
