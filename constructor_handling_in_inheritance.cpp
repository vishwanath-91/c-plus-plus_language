#include <iostream>

using namespace std;

class A
{
protected:
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "\n A=" << a;
    }
};
class B
{
protected:
    int b;

public:
    B(int y)
    {
        b = y;
    }
    void show_data()
    {
        cout << "\n B=" << b;
    }
};
class C : public A, public B
{
    int c;

public:
    C(int p, int q, int r) : A(p), B(q)
    {
        c = r;
    }
    void show_data1()
    {
        cout << "\n c=" << c;
    }
};
int main()
{
    C aa(10, 20, 30);
    aa.display();
    aa.show_data();
    aa.show_data1();
    return 0;
}
