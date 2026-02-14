#include<iostream>
using namespace std;
void dtb(int n){
    int ans=0;
    int power=1;//10^0
    while(n>0){
        int rem=n%2;//to get the last digit/remainder
        ////if we use 10 here then we will get the remainder in terms of numbers other than 0 or 1
        //but we want the answer in terms of 0 and 1 so we will be using 2 
        n=n/2;//dividing the number
        ans+=rem*power;//here if we do this then we add the ans and we get the number in binary forn
        power=power*10;

    }cout<<ans;
}
int main()
{
    dtb(50);
    return 0;
}   