#include<iostream>
using namespace std;
int main()
{
    int a=4,b=8,c=6,d=10;
    cout<<(a&b)<<endl;//Bitwise AND
    cout<<(a|b)<<endl;//Bitwise OR
    cout<<(a^b)<<endl;//Bitwise XOR
    cout<<(a<<1)<<endl;//Bitwise << Left shift operator
    cout<<(a<<2)<<endl;
    cout<<(a>>1)<<endl;//Bitwise >> Right Shift Operator
    cout<<(a>>2)<<endl;
//Homework
    cout<<(c&d)<<endl;
    cout<<(c|d)<<endl;
    cout<<(c^d)<<endl;
    cout<<(d<<2)<<endl;
    cout<<(d>>1)<<endl;

    return 0;
}