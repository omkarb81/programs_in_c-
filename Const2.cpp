#include<iostream>
using namespace std;

class Demo
{
    public:
       int No1; 
       int No2;
       const int No3; 
       const int No4;

       Demo() : No3(30), No4(40)
       {
        No1= 10;
        No2= 20;
       } 

       Demo(int A , int B , int C , int D) : No3(C), No4(D)
       {
        No1= A;
        No2= B;
       }
};

int main()
{
   //Demo obj;
   Demo obj(100, 200, 300, 400);

   cout<<obj.No1<<"\t"<<obj.No2<<"\t"<<obj.No3<<"\t"<<obj.No4<<"\t";

    return 0;
}