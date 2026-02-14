#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr=ptr+1;//increses by 1 ie. 4 bits
    cout<<ptr<<endl;
    ptr=ptr+2;//increses by 2 ie. 8 bits
    cout<<ptr<<endl;
    ptr=ptr+1;
    return 0;
}