#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;//size increments by 4 bits
    ptr--;
    cout<<ptr<<endl;

    return 0;
}