#include<iostream>
using namespace std;
int prime(int n){//this function checks whether a number is prime or not
    for(int j=2;j<n;j++){
        if(n%j==0 && n!=2){
            return 1;
        }
    }return 0;
}
void primeprint(int n){//this function uses the prime function and prints the prime number
        cout<<"not prime nor composite "<<1<<endl;
    for(int i=2;i<=n;i++){
        if(prime(i)==0){
            cout<<"prime "<<i<<endl;
        }
    }
}    
int main()
{
    primeprint(50);
    return 0;
}