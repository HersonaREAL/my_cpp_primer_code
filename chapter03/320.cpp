#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<int> a;
	int b;
	while(cin>>b){
		a.push_back(b);
	}	
//	for(decltype(a.size()) i = 0;i<a.size()-1;i++)
//		cout<<a[i]+a[i+1]<<" ";
	for(decltype(a.size()) i = 0,j=a.size()-1;i<j;i++,j--)
		cout<<a[i]+a[j]<<" ";
	cout<<endl;
}
