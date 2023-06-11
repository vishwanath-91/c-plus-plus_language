#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int a;

public:
    demo() // default constructor
    {
        a = 10;
    }
    demo(int x) // parameterized constructor
    {
        a = x;
    }
    demo(demo &z) // copy constructor
    {
        a = z.a;
    }

    void putdata()
    {
        cout << "\n a=" << a;
    }
};
int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}
