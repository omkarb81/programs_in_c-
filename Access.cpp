#include<iostream>
using namespace std;

class demo
{
    public:
      int A;
    private:
      int B;
    public:
      demo()
      {
        A = 11;
        B = 21;
      }
      void Fun()
      {
        cout<<"A value is :"<<A<<"\n";
        cout<<"B value is :"<<B<<"\n";
      }
};

int main()
{
    demo obj;
    cout<<"Value of A"<<obj.A<<"\n";
   // cout<<"Value of B"<<obj.B<<"\n";

    return 0;
}