#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
	vector<int> num;
	int tmp;
	while(cin>>tmp)
		num.push_back(tmp);
	for(auto a : num)
		cout<<a;
	cout<<endl;
}
