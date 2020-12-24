#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<int> num;
	int tmpNum;
	while(cin>>tmpNum)
		num.push_back(tmpNum);
	for(auto it = num.cbegin();it<num.cend()-1;++it)
		cout<< (*it) + *(it+1) << " ";
	cout<<endl;
	for(auto it1 = num.cbegin(),it2 = num.cend()-1;it1<=it2;++it1,--it2)
		cout<<*it1+*it2<<" ";
	cout<<endl;	
}
