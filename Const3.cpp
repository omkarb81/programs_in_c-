#include<iostream>
using namespace std;

class Demo
{
    public:
       int No1; 
       int No2;

       Demo( int A , int B)
       {
        No1 = A;
        No2 = B;
       }
       void Fun()
       {
       // No1++;
                cout<<"Hello i am fun";

       }
       void Gun() const
       {
        cout<<"Hello i am gun";
       }
};

int main()
{
   //Demo obj;
   Demo obj1(10,20);
   const Demo obj2(11,22);

   obj1.Fun();
   obj1.Gun();

   //obj2.Fun();
   obj2.Gun();

    return 0;
}