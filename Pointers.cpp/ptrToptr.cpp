#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* ptr=&a;
    int** par_ptr=&ptr;
    cout<<&ptr<<endl;//2
    cout<<par_ptr<<endl;//2

    return 0;
}