#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int a, b;

public:
    void getdata();
    friend int sum(demo);
};

void demo::getdata()
{
    cout << "\n enter two number:";
    cin >> a >> b;
}
int sum(demo aa)
{
    return (aa.a + aa.b);
}
int main()
{
    demo aa;
    aa.getdata();
    cout << "addition=" << sum(aa);
    return 0;
}
