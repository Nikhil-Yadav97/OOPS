// static local variable
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fn(){
    static int count=1;
    cout<<count<<" ";
    count++;
}
int main()
{
    for(int i=0;i<3;i++)
    {

        fn();
    }
return 0;
}