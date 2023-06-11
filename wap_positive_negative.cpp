#include <iostream.h>
#include <conio.h>

using namespace std;

class positive_negative
{
private:
    int x;

public:
    void setdata();
    void showdata();
};

void positive_negative::setdata()
{
    cout << "\n enter the value of x";
    cin >> x;
}

void positive_negative::showdata()
{
    (x >= 0) ? cout << "positive" : cout << "negative";
}

int main()
{
    positive_negative aa;
    aa.setdata();
    aa.showdata();
    return 0;
}
