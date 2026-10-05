#include<iostream>
using namespace std;

namespace College
{
    int marks=95;
}

int num=10;

int main()
{
    int num=20;

    cout<<"Local Number = "<<num<<endl;
    cout<<"Global Number = "<<::num<<endl;
    cout<<"Marks = "<<College::marks;

    return 0;
}
