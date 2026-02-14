#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* ptr=&a;
    int** par_ptr=&ptr;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<*par_ptr<<endl;
    cout<<**par_ptr<<endl;
    return 0;
}