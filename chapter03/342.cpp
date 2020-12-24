#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<int> a = {1,2,3,3,4,1,22,313,0,1};
	int b[10];
	for(int i = 0;i<a.size();i++)
		b[i]=a[i];
	for(auto i : b)
		cout<< i <<" ";
	cout<<endl;	
}
