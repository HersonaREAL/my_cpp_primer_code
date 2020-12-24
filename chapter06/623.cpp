#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void print(int x){
	cout<<x<<endl;
}
void print(const int *beg,const int *end){
	while(beg!=end)
		cout<<*beg++<<" ";
	cout<<endl;
}
void print(const int (&arr)[2]){
	for(const auto i:arr)
		cout<<i<<" ";
	cout<<endl;
}
int main(){
	int i = 0, j[2] = {0,1};
	print(i);
	print(std::begin(j),std::end(j));
	print(j);
	return 0;	
}
