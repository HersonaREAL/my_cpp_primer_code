#include<iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<vector>
#include <algorithm>
#include <map>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::map;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
void word_transform(ifstream &map_file,ifstream &input);
map<string,string> bulidMap(ifstream &map_file);
const string &transform(const string &s,const map<string,string> &m);
int main(int argc,char *argv[]){
	if(argc<3){
		cout<<"prog <file1> <file2>"<<endl;
		exit(1);
	}
	ifstream map_file(argv[1]),input(argv[2]);
	if(map_file.fail()||input.fail()){
		cout<<"Can not open file"<<endl;
	}
	word_transform(map_file, input);	
}
void word_transform(ifstream &map_file,ifstream &input){
	auto trans_map = bulidMap(map_file);
	string oneline;
	while(std::getline(input,oneline)){
		std::istringstream wordStream(oneline);
		string word;
		bool firstword = true;
		while(wordStream>>word){
			if(firstword)
				firstword = false;
			else
				cout<<" ";
			cout<<transform(word,trans_map);
		}
		cout<<endl;
	}
}

map<string,string> bulidMap(ifstream &map_file){
	map<string,string> trans_map;
	string key,value;
	while(map_file>>key&&std::getline(map_file,value)){
		if(value.size()>1)
			trans_map[key] = value.substr(1);
		else
			throw std::runtime_error("no rule for "+key);
	}
	return trans_map;
}
const string &transform(const string &s,const map<string,string> &m){
	auto ret = m.find(s);
	if(ret!=m.end())
		return ret->second;
	else
		return s;
}
