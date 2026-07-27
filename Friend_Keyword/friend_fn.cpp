#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class fifa
{
private:
    string winners;
public:
    fifa(string team) : winners(team)
    {

        cout << "2022 World cup" << endl;
        cout << this->winners << endl;
    }

    friend void updatewinners(fifa &currentWC);
};
 void updatewinners(fifa &currentWC)
{
    cout << "2026 World cup" << endl;
    currentWC.winners = "Spain";
    cout << currentWC.winners << endl;
}
int main()
{
    fifa currentWC("Argentina");
    updatewinners(currentWC);
    return 0;
}