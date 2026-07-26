// static member varible and functions
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class football{
    public : 
    static int inventedin;
    football(int year){
        inventedin=year;
    }

    static int score(int currscore,int newone){
        return currscore+newone;
    }
};
int football::inventedin=1863;
int main()
{
    football player(1939);
    cout<<player.inventedin<<endl;
    cout<<football::inventedin<<endl;
    cout<<football::score(100,10)<<endl;


return 0;
}