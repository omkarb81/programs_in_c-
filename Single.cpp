#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;

    Base()
    {
        i = 10;
        j = 20;
        cout << "Inside Base constructor" << '\n';
    }
    ~Base()
    {
        cout << "Inside Base destructor" << '\n';
    }
    void Fun()
    {
        cout << "Inside Base Fun\n";
    }
};

class Derived : public Base
{
public:
    int x, y;

    Derived()
    {
        x = 30;
        y = 40;
        cout << "Inside Derived constructor" << '\n';
    }
    ~Derived()
    {
        cout << "Inside Derived destructor" << '\n';
    }
    void Gun()
    {
        cout << "Inside Derived Gun\n";
    }
};

int main()
{
    // Base bobj;
    Derived dobj;

    cout<<"Inside Main Function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();
    return 0;
}