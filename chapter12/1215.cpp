#include<iostream>
#include <memory>
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
using std::shared_ptr;
using std::string;
using std::vector;
struct destination{
	string ip;
	string port;
};
struct connection{
	string ip;
	string port;
};
connection connect(destination *d){
	connection tmp;
	tmp.ip = d->ip;
	tmp.port = d->port;
	return tmp;
}

void disconnect(connection c){
	c.ip.clear();
	c.port.clear();
}
void f(destination &d){
	connection c = connect(&d);
	shared_ptr<connection> p(&c,[](connection *p){ disconnect(*p); });
	cout<<p->ip<<":"<<p->port<<endl;
}
int main(){
	destination tmp;
	tmp.ip="192.168.1.1";
	tmp.port="1080";
	f(tmp);
}
