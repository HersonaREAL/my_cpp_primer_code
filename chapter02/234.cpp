#include<iostream>

int main(){
	int i = 0,&r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	std::cout<< a <<" "<< b <<" "<< c <<" "<< d <<" "<< e<<" " << g << std::endl;	
	a = 42;//对的,a为普通变量
	b = 42;//对的, b为普通变量
	c = 42;//对的, c为普通变量
	//d = 42;//错的, d为指向整形变量的指针
	//e = 42;//错的, e为指向整型常量的指针
	//g = 42;//错的, g为常量引用,不能随意更改
	std::cout<< a<<" " << b <<" "<< c <<std::endl;
	return 0;	
}

