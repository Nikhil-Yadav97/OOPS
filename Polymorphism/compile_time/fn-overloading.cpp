



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public : 
    void show(int a ){
        cout<<"this is show 1::"<<a<<endl;
    }
    void show(double a ){
        cout<<"this is show 2::"<<a<<endl;
    }
};


int main()
{

    A obj1;
    obj1.show(1);
    // by default 1.9 is double not float
    // obj1.show(1.9f);  Matches show(float) perfectly
    obj1.show(1.9);
    
return 0;
}


