#include<iostream>
using namespace std;
int factorial(int f){
    int fact=1;
    for(int i=1;i<=f;i++){
        fact*=i;
    }
    return fact;
}
int coeff(int n,int r){
    int ans=factorial(n)/(factorial(r)*(factorial(n-r)));
    return ans;
}
int main()
{
    cout<<"Binomail coefficient "<<coeff(8,2)<<endl;
    return 0;
}