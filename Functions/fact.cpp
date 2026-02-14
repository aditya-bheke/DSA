#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<factorial(0)<<endl;
    return 0;
}