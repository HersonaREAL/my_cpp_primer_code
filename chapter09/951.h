#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
#ifndef e951
#define e951
class myDate{
	unsigned year,month,day;
	unsigned findM(const string &s);
public:
	myDate(string s){
		int tmpM = findM(s);
		if(tmpM){
			month = tmpM;
			string::size_type pos1 = s.find_first_of("0123456789");
			string::size_type pos2 = s.find_first_not_of("0123456789",pos1);
			string::size_type pos3 = s.find_first_of("0123456789",pos2);
			day = stoi(s.substr(pos1,pos2-pos1));
			year = stoi(s.substr(pos3));
			return;
		}
		string::size_type pos1 = s.find_first_of("0123456789");
		string::size_type pos2 = s.find_first_not_of("0123456789",pos1);
		string::size_type pos3 = s.find_first_of("0123456789",pos2);
		string::size_type pos4 = s.find_first_not_of("0123456789",pos3);
		string::size_type pos5 = s.find_first_of("0123456789",pos4);
		day = stoi(s.substr(pos1,pos2-pos1));
		month = stoi(s.substr(pos3,pos4-pos3));
		year = stoi(s.substr(pos5));	
	}
	void print(){
		cout<<"year:"<<year<<endl;
		cout<<"month:"<<month<<endl;
		cout<<"day:"<<day<<endl;
	}
};
unsigned myDate::findM(const string &s){
		if (s.find("Jan") != string::npos)  return 1;
		if (s.find("Feb") != string::npos)  return 2;
		if (s.find("Mar") != string::npos)  return 3;
		if (s.find("Apr") != string::npos)  return 4;
		if (s.find("May") != string::npos)  return 5;
		if (s.find("Jun") != string::npos)  return 6;
		if (s.find("Jul") != string::npos)  return 7;
		if (s.find("Aug") != string::npos)  return 8;	
		if (s.find("Sep") != string::npos)  return 9;
		if (s.find("Oct") != string::npos)  return 10;
		if (s.find("Nov") != string::npos)  return 11;
		if (s.find("Dec") != string::npos)  return 12;
		return 0;
}
#endif
