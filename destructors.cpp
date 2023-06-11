#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    static int count;

public:
    demo()
    {
        count++;
        cout << "\n no of object created" << count;
    }
    ~demo()
    {
        count--;
        cout << "\n no of object destroyed " << count;
    }
};
int demo::count;

int main()
{
    demo aa, bb, cc;

    return 0;
}
