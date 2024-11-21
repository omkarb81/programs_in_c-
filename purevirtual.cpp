#include<iostream>
using namespace std;

class Base
{
    public:
      int A , B;

      int Addition( int No1 , int No2)
      {
        return No1 + No2 ;
      }
      
      virtual int Substraction( int No1 , int No2) = 0;

};

class Derived: public Base
{
    public:
      int X ,Y;
       
      int Multiplication( int No1 , int No2)
      {

        return No1 * No2;
      }

       int Substraction( int No1 , int No2){
        return No1 - No2 ;
       }

};

int main()
{
    Derived dobj;

    //Base bobj; NA

    cout<<"Addition is :"<<dobj.Addition(10,11)<<"\n";
    cout<<"Substraction is :"<<dobj.Substraction(10,11)<<"\n";
    cout<<"Multiplication is :"<<dobj.Multiplication(10,11)<<"\n";

    cout<<"Size of base :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";


    return 0;
}




