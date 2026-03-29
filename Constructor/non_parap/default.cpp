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
    Cars()
    {
        company = "Toyota";
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

    Cars car1;
    car1.model = "Land Cruiser";
    car1.type = "Luxury SUV";
    car1.price = 20000000;
    car1.showDetails();

    return 0;
}