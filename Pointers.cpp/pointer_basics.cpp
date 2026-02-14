#include<iostream>
using namespace std;

int main()
{
    float price=2.5f;
    int a=10;
    int* ptr=&a;//* can be used anywhere not necessarily near data type int between both anywhere
    float* new_ptr=&price;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<new_ptr<<endl;
    return 0;
}