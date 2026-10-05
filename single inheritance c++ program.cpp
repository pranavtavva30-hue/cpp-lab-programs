#include<iostream>
using namespace std;
class Father {
public:
    void showFather() {
        cout << "Father is a teacher" << endl;
    }
};

class Son : public Father {
public:
    void showSon() {
        cout << "Son is a student" << endl;
    }
};

int main() {
    Son s;

    s.showFather();  // Inherited from Father
    s.showSon();     // Son's own function

    return 0;
}

