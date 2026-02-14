#include<iostream>
using namespace std;

int main()
{
    int* ptr1;
    int* ptr2;
    int* ptr3=ptr1;
    cout<<(ptr1<ptr2)<<endl;
    cout<<(ptr1==ptr3)<<endl;
    return 0;
} 