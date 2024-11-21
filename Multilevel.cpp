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

class DerivedX : public Derived
{
public:
    int a,b;

    DerivedX()
    {
        a = 30;
        b = 40;
        cout << "Inside DerivedX constructor" << '\n';
    }
    ~DerivedX()
    {
        cout << "Inside DerivedX destructor" << '\n';
    }
    void Sun()
    {
        cout << "Inside DerivedX Sun\n";
    }
};

int main()
{
    DerivedX dobj;
    //constructors : Base -> Derived -> DerivedX

    cout<<"Inside Main Function\n";
    cout<<"size of base class\n"<<sizeof(Base); //8
    cout<<"size of Derived class\n"<<sizeof(Derived); //16
    cout<<"size of DerivedX class\n"<<sizeof(DerivedX); //24
    
    cout<<dobj.i<<"\n"; //10
    cout<<dobj.j<<"\n"; //20
    cout<<dobj.x<<"\n"; //30
    cout<<dobj.y<<"\n"; //40
    cout<<dobj.a<<"\n"; //50
    cout<<dobj.b<<"\n"; //60

    dobj.Fun(); //Inside Fun Base
    dobj.Gun(); //Inside Gun Derived
    dobj.Sun(); //Inside Sun DerivedX

    //Destructor : DerivedX -> Derived -> Base
    return 0;
}