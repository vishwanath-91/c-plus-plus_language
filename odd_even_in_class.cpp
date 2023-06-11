#include <iostream>
#include <conio.h>
using namespace std;

class oddeven
{
private:
    int a;

public:
    void setdata();
    void showdata();
};

void oddeven::setdata()
{
    cout << "\n enter no to check=";
    cin >> a;
}
void oddeven::showdata()
{
    if (a % 2 == 0)
    {
        cout << "\n even";
    }
    else
    {
        cout << "\n odd";
    }
}

int main()
{
    oddeven aa;
    aa.setdata();
    aa.showdata();
    return 0;
}
