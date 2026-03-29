#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public : 
    virtual void show(){
        cout<<"this is A"<<endl;
    }
};

class B : public A{
    public : 
    void show(){
        cout<<"this is B"<<endl;
    }
};
int main()
{

    // this is the problem without virtual keyword pointer of obj B call A fn
    A *ptr=new B();
    ptr->show();
    // this is A

    // after making A show fn virtual 
    // calls B's show fn 

return 0;
}
