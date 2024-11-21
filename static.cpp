#include<iostream>
using namespace std;

class Demo
{
  public:
    int i,j;
    static int k;

    Demo()
    {
        i = 10;
        j = 20;
    }
    void Fun()
    {
        cout<<"Inside non static function"<<"\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<k<<"\n";
    }
    static void Gun(){
        cout<<"Inside static gun"<<"\n";
        cout<<k<<"\n";
    }
};
int Demo :: k = 30;

int main()
{

cout<<"K value is"<<Demo::k<<"\n";
Demo :: Gun();

Demo obj1;
Demo obj2;

obj1.Fun();
obj2.Fun();

obj1.Gun();
obj2.Gun();

cout<<"Value of k :"<<obj1.k<<"\n";
cout<<"Value of k :"<<obj2.k<<"\n";
};