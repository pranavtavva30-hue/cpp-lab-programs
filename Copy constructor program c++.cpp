#include<iostream>
using namespace std;

class Student
{
public:
    int id;

    Student(int x)
    {
        id = x;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        id = s.id;
    }

    void display()
    {
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Student s1(101);
    Student s2 = s1;   // Copy constructor is called

    s1.display();
    s2.display();

    return 0;
}
