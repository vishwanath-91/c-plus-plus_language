#include <iostream>
#include <conio.h>

using namespace std;
class B;
class A
{
private:
    int x;

public:
    void getdata()
    {
        cout << "enter the value of x=";
        cin >> x;
    }
    friend void max(A, B);
};
class B
{
private:
    int y;

public:
    void getdata()
    {
        cout << "enter the value of y=";
        cin >> y;
    }
    friend void max(A, B);
};

void max(A aa, B bb)
{
    if (aa.x > bb.y)
    {
        cout << "the max value is aa.x=" << aa.x;
    }
    else
    {
        cout << "the max value is bb.y=" << bb.y;
    }
}

int main()
{
    A aa;
    B bb;
    aa.getdata();
    bb.getdata();
    max(aa, bb);
    return 0;
}
