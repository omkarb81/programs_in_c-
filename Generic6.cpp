#include<iostream>
using namespace std;

template <class T>
class Array
{
    public:
    int Size;
    T *Arr;
       
       Array(int no)
       {
         Size = no;
         Arr = new T[Size];
       }

       ~Array()
       {
        delete []Arr;
       }

       void Accept()
       {
        cout<<"Enter the element \n";
        int iCnt = 0;
        for(iCnt = 0 ; iCnt <Size ; iCnt++)
        {
            cin>>Arr[iCnt];
        }
       }

       void Display()
       {
        cout<<"Display the element \n";
        int iCnt = 0;
        for(iCnt = 0 ; iCnt <Size ; iCnt++)
        {
            cout<<Arr[iCnt];
        }
       }   
};

int main()
{
    Array <int>aobj(5);
    aobj.Accept();
    aobj.Display();

    Array <char>aobj2(5);
    aobj.Accept();
    aobj.Display();
}