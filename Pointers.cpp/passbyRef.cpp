#include<iostream>
using namespace std;
void changeA(int* ptr){//2)then we need a pointer to store the address of a so we write int* a
    *ptr=10;//dereference ptr to up date value of a
    cout<<*ptr<<" inside function"<<endl;
}
int main()
{
    int a=5;
    changeA(&a);//1)first we pass the address of a in the function call
    cout<<a<<" Outside function"<<endl;
    return 0;
}