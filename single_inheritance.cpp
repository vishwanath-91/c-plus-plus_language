#include <iostream>
#include <conio.h>

using namespace std;

class A
{
protected:
    int x;

public:
    void input1()
    {
        cout << "\n enter number";
        cin >> x;
    }
};
class B : public A
{
    int y;

public:
    void input2()
    {
        cout << "\n enter no:";
        cin >> y;
    }
    void showdata()
    {
        cout << "\n addition=" << x + y;
    }
};
int main()
{
    B aa;
    aa.input1();
    aa.input2();
    aa.showdata();
    return 0;
}
