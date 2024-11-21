#include <iostream>

using namespace std;

class Base
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    void Gun()
    {
        cout << i << "\n"; //A
        cout << j << "\n"; //A
        cout << k << "\n"; //A
    }
};

class Derived : public Base
{
public:
    void Fun()
    {
        cout << i << "\n"; //A
        cout << j << "\n"; //NA
        cout << k << "\n"; //A
    }
};

int main()

{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n"; //A 
    cout<<bobj.j<<"\n"; //NA
    cout<<bobj.k<<"\n"; //NA

    cout<<dobj.i<<"\n"; //A 
    cout<<dobj.j<<"\n"; //NA
    cout<<dobj.k<<"\n"; //NA


    return 0;
}