#include <iostream>
#include <conio.h>

using namespace std;

class A
{
    int roll;

public:
    void get_roll()
    {
        cout << "\n enter roll=";
        cin >> roll;
    }
    void show_roll()
    {
        cout << "\n roll no " << roll;
    }
};

class B : public A
{

public:
    int sub1, sub2;
    void get_marks()
    {
        cout << "\n enter mark of 2 sub=";
        cin >> sub1 >> sub2;
    }
    void show_marks()
    {
        cout << "\n mark1=" << sub1 << "\n mark2=" << sub2;
    }
};
class C : public B
{
    int sport_m;

public:
    void get_sport_m()
    {
        cout << "\n enter sports marks=";
        cin >> sport_m;
    }
    void show_sport_m()
    {
        cout << "\n sport_m=" << sport_m;
    }

    void total()
    {
        show_roll();
        show_marks();
        show_sport_m();
        cout << "\n the total marks =" << sub1 + sub2 + sport_m;
    }
};

int main()
{
    C aa;
    aa.get_roll();
    aa.get_marks();
    aa.get_sport_m();
    aa.total();
    return 0;
}
