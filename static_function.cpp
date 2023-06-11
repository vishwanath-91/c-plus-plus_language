#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int x;
    static int y;

public:
    void getdata(int a)
    {
        x = a;
        y = y + 1;
    }
    void showdata()
    {
        cout << "\n x=" << x << "\n y=" << y;
    }

    static void abc()
    {
        cout << "\n y=" << y;
    }
};
int demo::y;

int main()
{
    demo aa;
    aa.getdata(10);
    aa.showdata();
    aa.getdata(25);
    aa.showdata();
    demo::abc();
    return 0;
}
