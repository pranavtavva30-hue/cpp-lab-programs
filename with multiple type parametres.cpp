#include <iostream>
using namespace std;

template <class T1, class T2>
class Test {
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Test<int, float> obj(10, 20.5);

    obj.display();

    return 0;
}
