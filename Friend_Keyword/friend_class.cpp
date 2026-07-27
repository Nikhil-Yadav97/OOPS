// can also a single fn take two diff class obj and do operations make that fn friend with both the classes
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Mobile
{
private:
    void fn()
    {
        cout << "A feature loaded communication device" << endl;
    }
    friend class Samsung;
};

class Samsung
{
public:
    void detail(Mobile &phone)
    {
        phone.fn();
    }
};
int main()
{
    Mobile phone;
    Samsung device;
    device.detail(phone);

    return 0;
}