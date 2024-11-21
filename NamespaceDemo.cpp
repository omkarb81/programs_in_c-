#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
        void Display()
        {
           cout<<"Hii";
        }
    };
}

int main()
{ 
    using namespace Marvellous;
    Demo dobj;

    dobj.Display();
    return 0;

}