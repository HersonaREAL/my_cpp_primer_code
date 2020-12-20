#include<iostream>
#include <fstream>
#include<vector>
#include <stack>
#include <deque>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using std::stack;
using std::deque;
int main(){
	string s;
	stack<char> stk;
	int has = 0;
	cout<<"input:";
	getline(cin,s);
	for(char c:s){
		stk.push(c);
		if(c=='(') ++has;
		if(c==')'&&has){
			while(stk.top()!='(') stk.pop();
			stk.pop();
			stk.push('s');
			stk.push('h');
			stk.push('i');
			stk.push('t');
			--has;
		}
	}
	deque<char> tmp;
	while(!stk.empty()){
		tmp.push_front(stk.top());
		stk.pop();
	}
	string out(tmp.begin(),tmp.end());
	cout<<out<<endl;
}
