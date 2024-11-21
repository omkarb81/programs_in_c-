#include<iostream>
using namespace std;

class Demo
{
    public:
     int i;
    protected:
    int j;
    private:
     int k , l;
    public:
     Demo()
     {
        i = 10;
        j = 20;
        k = 30;
        l = 40;
     }
     friend void Fun(); 
     friend void Gun(); 

};

void Fun()
{ Demo obj;
  cout<<obj.i<<"\n";
  cout<<obj.j<<"\n";
  cout<<obj.k<<"\n";
}

void Gun()
{ Demo obj;
  cout<<obj.i<<"\n";
  cout<<obj.j<<"\n";
  cout<<obj.l<<"\n";
}


int main()
{

    Fun();
    Gun();
    return 0;
}