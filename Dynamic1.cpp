#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; //static memory

    int *ptr = NULL;

    //step1 : Allocate memory
    ptr = new int[5];

    //step2 : logic

    //step3 : Deallocate memory
    delete[] ptr;



    return 0;
}