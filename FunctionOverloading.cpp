#include<iostream>
using namespace std;

class demo
{
    public:
      int Addition(int A , int B)
      {
        return A+B;
      };
      double Addition(double A , double B)
      {
        return A+B;
      };
      int Addition(int A , int B, int C)
      {
        return A+B+C;
      };
};

int main()
{
    demo obj;
    cout<<obj.Addition(10,20)<<"\n";
    cout<<obj.Addition(10.89,20.09)<<"\n";
    cout<<obj.Addition(10,20,30)<<"\n";

    return 0;
}