#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

long long fact(int x){
	long long result = 1;
	while(x>1)
		result*=(x--);
	return result;
}

int main(){
	int x;
	cin>>x;
	cout<<"fact:"<<fact(x)<<endl;
}
