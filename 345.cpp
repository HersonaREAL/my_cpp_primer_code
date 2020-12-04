#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	//version 1
	cout<<"version 1"<<endl;
	for(auto &u : ia){
		for(auto v :u)
			cout<< v <<"  ";
		cout<<endl;
	}

	//version 2
	cout<<"version 2"<<endl;
	for(auto i = 0;i<3;i++){
		for(auto j = 0 ;j<4;j++)
			cout<<ia[i][j]<<"  ";
		cout<<endl;
	}

	//version 3
	cout<<"version 3" <<endl;
	for(auto i = std::begin(ia);i!=std::end(ia);++i){
		for(auto j = std::begin(*i);j!=std::end(*i);++j)
			cout<< *j <<"  ";	
		cout<<endl;	
	}
}
