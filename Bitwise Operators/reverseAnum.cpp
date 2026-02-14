#include<iostream>
#include<cmath>
using namespace std;


int countDigits(int n){//you can also use the remainder method which is easy
    int count=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        count++;
    }return count;
}   
void reverse(int n){
    int power=pow(10,countDigits(n)-1);
    int ans=0;
    while(n>=1){
        int rem=n%10;
        n/=10;
        ans+=rem*power;
        power/=10;

    }cout<<ans;
}


int main()
{
    reverse(1234);
    return 0;
}