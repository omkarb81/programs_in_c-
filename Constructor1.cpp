#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int No1;
    int No2;
    Marvellous()
    {
        cout<<"Inside default Constructore\n";
        No1= 0;
        No2= 0;
    }

    Marvellous(int A , int B)
    {
        cout<<"Inside paramertrised Constructore\n";
        No1= A;
        No2= B;
    }

    ~Marvellous()
    {
        cout<<"Inside Destructore\n";
    }

    void Fun()
    {
        cout<<"Inside Fun\n";
    }

};

int main()
{
    Marvellous mobj;

    return 0;
}