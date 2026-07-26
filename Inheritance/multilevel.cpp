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

class little : public Child{};

int main() {
    little c;
    c.show(); 
}