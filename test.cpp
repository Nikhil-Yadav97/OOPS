#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class house{
    public:
     int price;
     house(int price):price(price){
        
     }

     void show(){
        cout<<this->price;
     }
};
int main()
{
house h1(1000);
h1.show();
return 0;
}