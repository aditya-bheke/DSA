#include<iostream>
using namespace std;
void fibo(int n){
    int fib1=0;
    int fib2=1;
    cout<<fib1<<endl;
    cout<<fib2<<endl;
    for(int i=0;i<=n;i++){
        int num=fib1+fib2;
        cout<<num<<endl;
        fib1=fib2;
        fib2=num;

    }
}
int main()
{
    fibo(10);
    return 0;
}