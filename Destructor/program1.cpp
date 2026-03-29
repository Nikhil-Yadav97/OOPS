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
    int *milage;
    Cars(string company, int range)
    {
        this->company = company;
        milage = new int;
        *milage = range;
    }

    ~Cars()
    {
        cout << "Object Deleted";
        // need to delete pointers and other things auto delete when obj out of scope
        delete milage;
    }

    void showDetails()
    {
        cout << company << endl;
        cout << model << endl;
        cout << type << endl;
        cout << price << endl;
        cout << *milage<<endl;
    }
};
int main()
{

    Cars car1("Toyota",12);
    car1.model = "Land Cruiser";
    car1.type = "Luxury SUV";
    car1.price = 20000000;
    car1.showDetails();

    return 0;
}