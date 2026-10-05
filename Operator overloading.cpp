#include<iostream>
using namespace std;
class Student{
	public:
		int marks;
		Student operator+(Student s){
			Student st;
			st.marks=marks+s.marks;
			return st;
		}
};
main(){
	Student s1,s2,s3;
	s1.marks=100;
	s2.marks=100;
	s3=s1+s2;
	cout<<"Student s1 and s2 marks are added:"<<s3.marks;
}
