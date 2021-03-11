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
class Base{
protected:
	int prot_mem;
};
class Pub_Derv:public Base{
public:
	void memfcn(Base &b){b = *this;}
};
class prot_Derv:public Base{

	void memfcn(Base &b){b = *this;}
};
class priv_Derv:private Base{

	void memfcn(Base &b){b = *this;}
};
class d_from_pub:public Pub_Derv{

	void memfcn(Base &b){b = *this;}
};
class d_from_prot:public prot_Derv{

	void memfcn(Base &b){b = *this;}
};
class d_from_priv:public priv_Derv{

	void memfcn(Base &b){b = *this;}
};
int main(){
	Pub_Derv d1;
	priv_Derv d2;
	prot_Derv d3;
	d_from_pub dd1;
	d_from_priv dd2;
	d_from_prot dd3;
	Base *p = &d1;
	p = &d2;
	p = &d3;
	p = &dd1;
	p = &dd2;
	p = &dd3;	
}
