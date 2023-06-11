#include <iostream>
#include <conio.h>
using namespace std;

class for_loop
{
public:
    void showdata(void)
    {
        int i;
        for (i = 1; i < 10; i++)
        {
            std::cout << "index=" << i << std::endl;
        }
    }
};

int
main()
{
    for_loop aa;
    aa.showdata();
    return 0;
}
