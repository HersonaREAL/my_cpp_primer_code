#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
vector<int> *getVectorPtr();
void input2vector(vector<int> *);
void printVector(const vector<int> *);
int main(){
	auto ptr = getVectorPtr();
	input2vector(ptr);
	printVector(ptr);
	delete ptr;
}
vector<int> *getVectorPtr(){
	return new vector<int>();
}
void input2vector(vector<int> *v){
	int num;
	while(cin>>num)
		v->push_back(num);
}
void printVector(const vector<int> *v){
	for(int i = 0;i!=v->size();++i)
		cout<<(*v)[i]<<" ";
	cout<<endl;
}


