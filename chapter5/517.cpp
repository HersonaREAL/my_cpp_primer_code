#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<int> a1 = {0,1,1,2,3};
	vector<int> a2 = {0,1,1,2,3,5,8};
	vector<int> *longer = a1.size()>a2.size()?&a1:&a2;
	vector<int> *shorter = longer == &a1?&a2:&a1;
	decltype (a1.size()) i = 0;
	while(i!=(*shorter).size()){
		if((*shorter)[i]!=(*longer)[i])
			break;
		++i;
	}

	if(i==(*shorter).size())
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}
