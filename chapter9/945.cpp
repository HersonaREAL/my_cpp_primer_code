#include<iostream>
#include <fstream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
string addq(const string &name,const string &qian,const string &hou){
	string new_name(name);
	new_name.insert(new_name.begin(),qian.begin(),qian.end());
	return new_name.append(hou);


}
int main(){
	string s = addq("j","Mr.","REAL");
	cout<<s<<endl;	
}
