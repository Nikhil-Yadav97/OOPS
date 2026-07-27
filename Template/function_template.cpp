#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
T add(T a,T b){
    return a+b;
}
int main()
{
cout<<add<int>(4,5)<<endl;
cout<<add<double>(4.3,5.5);
return 0;
}