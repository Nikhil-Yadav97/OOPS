#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Cars{
private:
    string chassicNo;
public:
    string company;
    string model;
    string type;
    double price;

    double onRoadPrice(){
        return price+price*0.10;
    }

    void showDetails(){
        cout<<company<<endl;
        cout<<model<<endl;
        cout<<type<<endl;
        cout<<price<<endl;
        cout<<onRoadPrice();
    }

    // setter fn 
    void setChassic(string number)
    {
        chassicNo=number;
        return;
    }

    // getter fn
    string getChassic(){
        return chassicNo;
    }
};
int main()
{

    Cars car1;
    car1.company="Toyota";
    car1.model="Land Cruiser";
    car1.type="Luxury SUV";
    car1.price=20000000;
    car1.showDetails();

    // shows error as private memeber
    // car1.chassicNo;
    car1.setChassic("342SDGD3");
    cout<<endl<<car1.getChassic();
return 0;
}