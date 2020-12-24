#include <cmath>
#include<iostream>
#include <ostream>
#include<string>
#include<vector>
#ifndef exp723
#define exp723
class Screen;
class Window_mgr{
public:
	using PageIndex = std::string::size_type;
	inline void clear(PageIndex i);
private:
	std::vector<Screen> screens;
};

class Screen{
	public:
	       	using pos = std::string::size_type;
		Screen() = default;
		Screen(pos H,pos W):Height(H),Width(W),content(H*W,' '){}
		Screen(pos H,pos W,char c):Height(H),Width(W),content(H*W,c){}
		inline char get()const;
		inline char get(pos row,pos col)const;
		inline Screen &set(char ch);
		inline Screen &set(pos row,pos col,char ch);
		inline Screen &move(pos row,pos col);
		Screen &display(std::ostream &os){ do_display(os); return *this; }
		const Screen &display(std::ostream &os)const{ do_display(os); return *this; }
	private:
		friend void Window_mgr::clear(PageIndex);
		pos Height = 0 ,Width = 0;
		pos cursor = 0;
		std::string content;
		inline void do_display (std::ostream &os)const;
};
inline void Window_mgr::clear(PageIndex i){
	Screen &s = screens[i];
	s.content = std::string(s.Height*s.Width,' ');
}

inline Screen &Screen::set(char ch){
	content[cursor] = ch;
	return *this;
}
inline Screen &Screen::set(pos row,pos col,char ch){
	content[row*Width+col] = ch;
	return *this;
}
inline void Screen::do_display(std::ostream &os)const{
	for(auto i = 0;i!=Height;++i){
		for(auto j = 0;j!=Width;++j)
			os<<content[i*Width+j];
		os<<std::endl;
	}
}
inline char Screen::get()const {
	if(cursor>=content.size()) return -1;	
		return content[cursor]; 
}
inline char Screen::get(pos row,pos col)const{
	if(row>Height||col>Width) return -1;
	return content[row*Width+col];
}
inline Screen& Screen::move(pos row,pos col){
	cursor = row*Width+col;
	return *this;	
}
#endif
