#include<iostream>
using namespace std;
void changeA(int &b){
    b=10;
    cout<<b<<endl;
}
int main()
{
    int a=6;
    changeA(a);
    cout<<a<<endl;
    return 0;
}