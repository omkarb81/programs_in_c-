#include<iostream>
using namespace std;
float CalculateArea( float R , float PI = 3.14f)
{
    float area = 0.0f;
    area = R * R * PI;
    return area;
}

int main()
{
    float Ret = 0.0f;
    Ret = CalculateArea(10.5f , 3.14f);
    cout<<Ret<<"\n";
    Ret = CalculateArea(10.5f);
    cout<<Ret<<"\n";
    Ret = CalculateArea(10.5f,7.20f);
    cout<<Ret<<"\n";
    return 0;
    
};