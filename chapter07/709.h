#ifndef exp705
#define exp705
#include <istream>
#include <ostream>
#include<string>
struct Person{
	std::string name;
	std::string address;	
	std::string getName()const {return this->name;}
	std::string getAddress()const {return this->address;}
};
std::istream &read(std::istream &is,Person &man){
	is>>man.name>>man.address;
	return is;
}
std::ostream &print(std::ostream &os,const Person &man){
	os<<"Name:"<<man.getName()<<"  Address:"<<man.getAddress();
	return os;
}
#endif
