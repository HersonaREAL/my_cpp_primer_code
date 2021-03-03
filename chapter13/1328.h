#include <bits/c++config.h>
#include<string>
#ifndef aaa
#define aaa
class TreeNode{
private:
	std::string value;
	int count;
	TreeNode *left;
	TreeNode *right;
	std::size_t *use;
public:
	TreeNode():value(std::string()),count(1),left(nullptr),right(nullptr),use(new std::size_t(1)){}
	TreeNode(const std::string &s,TreeNode *l = nullptr,TreeNode *r = nullptr):value(s),left(l),right(r),use(new std::size_t(1)){
		if(left){
			count+=left->count;
			++*left->use;
		}
		if(right){
			count+=right->count;
			++*right->use;
		}

	}
	TreeNode(const TreeNode& src){
		++*src.use;
		value = src.value;
		left = src.left;
		if(left)
			++*left->use;
		right = src.right;
		if(right)
			++*right->use;
	}
	TreeNode &operator=(const TreeNode &src){
		++*src.use;
		if(--*use==0){
			if(left) delete left;
			if(right) delete right;
		}
		value = src.value;
		left = src.left;
		if(left)
			++left->use;
		right = src.right;
		if(right)
			++right->use;
		use = src.use;
		count = src.count;
		return *this;
	}
	~TreeNode(){ 
		if(--*use==0){
			if(left)
				delete left;
			if(right)
				delete right;
		}
	}
};

class BinStrTree{
public:
	BinStrTree():root(new TreeNode()){};
	BinStrTree(const std::string &s):root(new TreeNode(s)){}
private:
	TreeNode *root;
};
#endif
