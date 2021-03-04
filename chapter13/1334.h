#include<string>
#include<unordered_set>
#ifndef ggg
#define ggg
class Folder;
class Message{ 
	friend void swap(Message &a,Message &b);
	friend class Folder; 
public: 
	explicit Message (const std::string &s = ""):contents(s){}
	Message(const Message &src);
	Message& operator=(const Message &src);
	~Message();
	void save(Folder &f);
	void remove(Folder &f);
private: 
	std::string contents;
	std::unordered_set<Folder*> folders;
	void add_to_Folders(const Message &m);
	void remove_from_Folders();
};
Message::Message(const Message &src){
	contents = src.contents;
	folders = src.folders;
	add_to_Folders(src);	
}
Message& Message::operator=(const Message &src){
	remove_from_Folders();
	contents = src.contents;
	folders = src.folders;
	add_to_Folders(src);
	return *this;
}
Message::~Message(){
	remove_from_Folders();
}
void Message::save(Folder &f){
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder &f){
	folders.erase(&f);
	f.remMsg(this);
}
void Message::add_to_Folders(const Message &m){
	for(auto &f:m.folders)
		f->addMsg(this);
}
void Message::remove_from_Folders(){
	for(auto &f:folders)
		f->remMsg(this);
}
void swap(Message &a,Message &b){
	using std::swap;
	for(auto f:a.folders)
		f->remMsg(&a);
	for(auto f:b.folders)
		f->remMsg(&b);
	swap(a.contents,b.contents);
	swap(a.folders,b.folders);
	for(auto f:a.folders)
		f->addMsg(&a);
	for(auto f:b.folders)
		f->addMsg(b);
}
#endif
