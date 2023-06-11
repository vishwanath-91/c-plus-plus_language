#include <iostream>
#include <conio.h>

using namespace std;

class time
{
    int h, m;

public:
    void setdata()
    {
        cout << "\n enter hours & minutes";
        cin >> h >> m;
    }
    void showdata()
    {
        cout << " \n hours=" << h;
        cout << "\n minutes=" << m;
    }
    void sum(time t1, time t2)
    {
        h = (t1.m + t2.m) / 60;
        m = (t1.m + t2.m) % 60;
        h = h + (t1.h + t2.h);
    }
};

int main()
{
    time t1, t2, t3;
    t1.setdata();
    t2.setdata();
    t3.sum(t1, t2);
    t1.showdata();
    t2.showdata();
    t3.showdata();
}
