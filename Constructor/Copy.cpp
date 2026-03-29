#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Cars
{
public:
    string company;
    string model;
    string type;
    double price;
    Cars(string company)
    {
        this->company = company; 
    }

    // if this is not available than default copy constructor is called
    Cars(Cars &obj)
    {
        cout<<"This is copy Constructor"<<endl;
        this->company=obj.company;
        this->model=obj.model;
        this->price=obj.price;
        this->type=obj.type;
    }

    void showDetails()
    {
        cout << company << endl;
        cout << model << endl;
        cout << type << endl;
        cout << price << endl;
    }
};
int main()
{

    Cars car1("Toyota");
    car1.model = "Land Cruiser";
    car1.type = "Luxury SUV";
    car1.price = 20000000;


    // this is default copy constructor
    Cars car2(car1);
    car2.showDetails();

    return 0;
}