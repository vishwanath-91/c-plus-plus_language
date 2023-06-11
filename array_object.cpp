#include <iostream>
#include <conio.h>

using namespace std;

class c_array
{
    int a, b;

public:
    void setdata(void)
    {
        cout << "enter the value of a=";
        cin >> a;
        cout << "enter the value of b=";
        cin >> b;
    }
    void showdata(void)
    {
        cout << "the value of a=" << a << endl
             << "the value of b=" << b;
    }
};

int main()
{
    c_array aa[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        aa[i].setdata();
    }
    for (i = 0; i < 5; i++)
    {
        aa[i].showdata();
    }

    return 0;
}
