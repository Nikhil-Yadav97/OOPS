#include <iostream>
using namespace std;

class P1 {
public:
    void show() {
        cout << "Parent1 function\n";
    }
};
class P2 {
public:
    void show() {
        cout << "Parent2function\n";
    }
};

class Child : public P1,public P2 {
    P1::show();
};

int main() {
    Child c;
    c.show(); 
}