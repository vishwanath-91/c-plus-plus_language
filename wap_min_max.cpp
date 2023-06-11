#include <iostream>
#include <conio.h>
using namespace std;

class min_max
{

private:
public:
    int a = 0, b = 0;
    void getdata(void);
    void max_value(void);
    void min_value(void);
};

void min_max::getdata()
{
    cout << "\n enter the value of a=";
    cin >> a;
    cout << "\n enter the value of b=";
    cin >> b;
}
void min_max::max_value()
{
    if (a > b)
    {
        cout << "\n the max_value is=" << a;
    }
    else
    {
        cout << "\n the max_value is =" << b;
    }
}

void min_max::min_value()
{
    if (a < b)
    {
        cout << "\n the min_value is=" << a;
    }
    else
    {
        cout << "\n the min_value is =" << b;
    }
}

int main()
{
    min_max aa;
    cout << "\n the value of a=" << aa.a;
    cout << "\n the value of b=" << aa.b;
    aa.getdata();
    aa.max_value();
    aa.min_value();
    return 0;
}
