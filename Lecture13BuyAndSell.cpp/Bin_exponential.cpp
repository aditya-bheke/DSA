#include<iostream>
using namespace std;

int main()
{
    int power=5;
    int num=3;
    int power_bin=101;
    int ans=1;
    while(power_bin>0){
        if(power_bin%2==1){
            ans*=num;
        }
        num*=num;
        power_bin/=10;
    }
    cout<<ans;
    return 0;
}