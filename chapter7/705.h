#ifndef exp705
#define exp705
#include<string>
struct Person{
	std::string name;
	std::string address;	
	std::string getName()const {return this->name;}
	std::string getAddress()const {return this->address;}
};
#endif
