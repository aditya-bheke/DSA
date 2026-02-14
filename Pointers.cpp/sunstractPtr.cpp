#include<iostream>
using namespace std;

int main()
{
    int* ptr;//100
    int* ptr1=ptr+2;//108
    cout<<ptr1-ptr<<endl;//8 bits->2 int
    return 0;
}