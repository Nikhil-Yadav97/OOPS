#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public : 
    void show(){
        cout<<"this is A"<<endl;
    }
};

class B{
    public : 
    void show(){
        cout<<"this is B"<<endl;
    }
};
int main()
{

    A obj1;
    obj1.show();
    // B overrides the show fn to base class
    B obj2;
    obj2.show();
return 0;
}
