#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void printVector(vector<int>::iterator beg,vector <int>::iterator end){
	if(beg!=end){
	#ifndef NDEBUG
		cout<<"end - cur = "<<end-beg<<" ";
	#endif
		cout<<*beg<<" ";
		printVector(beg+1,end);
	}
}
int main(){
	vector<int> a = {1,2,3,4,5,6,7,8,9,10};
	printVector(a.begin(),a.end());
	cout<<endl;
	return 0 ;
}
