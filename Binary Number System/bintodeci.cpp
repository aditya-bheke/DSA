#include<iostream>
using namespace std;
void btd(int n){
    int ans=0;
    int power=1;//2^0
    while(n>0){
        int last=n%10;//to get the last digit/remainder
        //here we can use any of 2 or 10 as we will get remainder as in terms of
        //0 and 1 in both cases so we use 10
        n=n/10;//to remove the last digit
        ans+=last*power;
        power*=2;//2 because we have to multiply by increasing power of 2 by everybody
    }cout<<ans;
}
int main()
{
    btd(101010);
    return 0;
}