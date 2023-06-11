#include <iostream>
#include <conio.h>

using namespace std;

class addition
{
private:
    int a, b;

public:
    void setdata(void);
    void showdata(void);
};

void addition::setdata(void)
{
    cout << "\n enter two numbers:";
    cin >> a >> b;
}
void addition::showdata(void)
{
    cout << "\n addition:" << a + b;
}

int main()
{
    addition aa;
    aa.setdata();
    aa.showdata();
    return 0;
}
