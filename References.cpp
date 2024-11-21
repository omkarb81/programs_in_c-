#include<iostream>
using namespace std;

int main()
{
    int No = 11;
    int &X = No;

    cout<<No<<"\n";
    cout<<X<<"\n";
    cout<<&No<<"\n";
    cout<<&X<<"\n";

    return 0;
}