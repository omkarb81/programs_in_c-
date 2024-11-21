#include<iostream>
using namespace std;

class Base1
{
    public:
      int i,j;
      Base1(){
        cout<<"Inside Base1 Constructor\n";
        i=10;
        j=20;
      }
      ~Base1(){
        cout<<"Inside Base1 destructor\n";
      }
      void Fun()
      {
        cout<<"Inside Fun of Base1\n";
      }

};

class Base2
{
    public:
      int x,y;
      Base2(){
        cout<<"Inside Base2 Constructor\n";
        x=10;
        y=20;
      }
      ~Base2(){
        cout<<"Inside Base2 destructor\n";
      }
      void Gun()
      {
        cout<<"Inside Gun of Base2\n";
      }

};

class Derived : public Base2 , public Base1
{
    public:
      int a,b;
      Derived(){
        cout<<"Inside Derived Constructor\n";
        a=10;
        b=20;
      }
      ~Derived(){
        cout<<"Inside Derived destructor\n";
      }
      void Sun()
      {
        cout<<"Inside sun of Derived\n";
      }

};

int main()
{
    Derived dobj;

    cout<<sizeof(Base1)<<"\n";
    cout<<sizeof(Base1)<<"\n";
    cout<<sizeof(Base1)<<"\n";

    return 0;
}