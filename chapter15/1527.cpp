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
class Quote{
public:
	Quote(){ cout<<"Quote()"<<endl; }
	Quote(const string &s,int A):no(s),a(A){ cout<<"Quote(const string &s,int A)"<<endl; };
	virtual ~Quote(){ cout<<"virtual ~Quote"<<endl; }
	Quote(const Quote &q):no(q.no),a(q.a){ geta(); cout<<"Quote(const Quote &q)"<<endl;}
	Quote &operator=(const Quote &src){
		no = src.no;
		a = src.a;
		cout<<"Quote operator ="<<endl;
		return *this;
	}
	virtual int geta(){ cout<<"Quote::geta"<<endl;return a;}
protected:
	int a;
private:
	string no;
};
class Bulk_quote:public Quote{
public:
	using Quote::Quote; 
	Bulk_quote(){cout<<"Bulk_quote()"<<endl;}
	~Bulk_quote(){cout<<"~Bulk_quote()"<<endl;}
	Bulk_quote(const Bulk_quote &b):Quote(b),no2(b.no2),b(b.b){cout<<"Bulk_quote(const Bulk_quote &b)"<<endl;}
	Bulk_quote &operator=(const Bulk_quote &src){
		Quote::operator=(src);
		no2 = src.no2;
		b = src.b;
		cout<<"Bulk_quote operator="<<endl;
		return *this;
	}
	int geta() override{
		cout<<"Bulk_quote::geta"<<endl;
		return a+b;
	}
private:
	string no2;
	int b;

};
int main(){

	Bulk_quote b("s",1);
}
