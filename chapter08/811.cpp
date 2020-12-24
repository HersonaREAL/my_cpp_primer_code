#include<iostream>
#include <fstream>
#include <sstream>
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
struct PersonInfo{
	string name;
	vector<string> phones;
};
int main(){
	string line,word;
	vector<PersonInfo> people;
	std::istringstream record(line);
	while(getline(cin,line)){
		PersonInfo info;
		record.str(line);
		record>>info.name;
		while(record>>word)
			info.phones.push_back(word);
		people.push_back(info);
		record.clear();
	}
	for(const PersonInfo &p:people){
		cout<<"name:"<<p.name<<endl;
		cout<<"phone:";
		for(const string &ph:p.phones)
			cout<<ph<<" ";
		cout<<endl<<endl;
	}	
	return 0;
}
