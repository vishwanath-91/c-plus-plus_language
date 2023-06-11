#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int x, y;
    static int z;

public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
        z = z + 1;
    }
    void showdata()
    {
        cout << "x=" << x << "\n y=" << y << "\n z=" << z << endl;
    }
};

int demo::z;
int main()
{
    demo aa, bb;
    aa.getdata(2, 5);
    bb.getdata(3, 6);
    aa.showdata();
    aa.showdata();
    return 0;
}
