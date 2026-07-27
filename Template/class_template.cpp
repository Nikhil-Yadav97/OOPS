#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class T>
class Number {
private:
    T val;
public:
    Number(T v) : val(v) {}
    T getVal() { return val; }
};
int main() {
    Number<int> intNum(42);
    Number<string> strNum("Hello");
    cout<<intNum.getVal()<<endl;
    cout<<strNum.getVal();
}