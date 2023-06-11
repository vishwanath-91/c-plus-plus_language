#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int a, b;

public:
    demo(int m, int n)
    {
        a = m;
        b = n;
    }
    void putdata()
    {
        cout << "\n a=" << a << "\n b=" << b;
    }
};

int main()
{
    demo aa(20, 30);
    aa.putdata();
    return 0;
}
