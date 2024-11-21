#include <iostream>
using namespace std;

class Demo
{
public:
  int No1, No2;
  Demo(int A, int B)
  {
    No1 = A;
    No2 = B;
  }
  void Display(int X)
  {
    cout << "No1 is" << this->No1 << "\n";
    cout << "No2 is" << this->No2 << "\n";
    cout << "X is" << X << "\n";
  }
};

int main()
{
  Demo obj(10, 20);

  obj.Display(30);

  return 0;
}