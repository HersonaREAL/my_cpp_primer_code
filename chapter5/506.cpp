#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	const vector<string> scores = {"F","D","C","B","A","A++"};
	const vector<int> grade = {10,20,30,55,44,55,62,67,68,77,79,73,82,88,85,98,90,95,100};
	vector<string> letter_grade;
	for(auto ptr = grade.begin();ptr!=grade.end();++ptr)
		cout<< *ptr <<" ";
	cout<<endl;
	for(decltype(grade.size()) i = 0;i<grade.size();++i){
		string tmp_letter;
		tmp_letter = grade[i]<60?scores[0]:grade[i]!=100?
			 (grade[i]%10>7?(scores[(grade[i]-50)/10]+"+"):grade[i]%10<3?
			 (scores[(grade[i]-50)/10]+"-"):scores[(grade[i]-50)/10])
			 :scores[(grade[i]-50)/10];
		
		letter_grade.push_back(tmp_letter);
	}
	for(const auto letter : letter_grade)
		cout<<letter<<"  ";
	cout<<endl;

}
