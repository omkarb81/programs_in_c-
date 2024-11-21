#include<iostream>
using namespace std;

void Display( int A= 10 , int B = 20 , int C = 30)
{
    cout<<A<<B<<C<<"\n";
}


int main()
{
   Display();
   Display(11);
   Display(11,21);
   Display(11,21 ,31);

    return 0;
}