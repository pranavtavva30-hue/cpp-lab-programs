#include<iostream>.
using namespace std;
class Student 
{
	public:
	int id;
	string name;
	void display()
	{
		cout<<"ID:"<<id<<endl;
		cout<<"Name:"<<name;
	}
};
int main()
{
	Student s;
	s.id = 111;
	s.name = "Nani";
	s.display();
	return 0;
}
