#include<iostream>
#include<string>
#ifndef exp723
#define exp723
class Screen{
	public:
	       	using pos = std::string::size_type;
		Screen() = default;
		Screen(pos H,pos W):Height(H),Width(W),content(H*W,' '){}
		Screen(pos H,pos W,char c):Height(H),Width(W),content(H*W,c){}
		char get()const {
		       	if(cursor>=content.size()) return -1;	
			return content[cursor]; 
		}
		inline char get(pos row,pos col)const;
		inline Screen &move(pos row,pos col);
	private:
		pos Height = 0 ,Width = 0;
		pos cursor = 0;
		std::string content;
};
inline char Screen::get(pos row,pos col)const{
	if(row>Height||col>Width) return -1;
	return content[row*Width+col];
}
inline Screen& Screen::move(pos row,pos col){
	cursor = row*Width+col;
	return *this;	
}
#endif
