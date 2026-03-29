#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent function\n";
    }
};

class Child : public Parent {
};

int main() {
    Child c;
    c.show(); 
}