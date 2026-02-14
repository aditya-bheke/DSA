#include<iostream>
using namespace std;
void powerOf2(double x){
    while(x>1){
        x/=2;
        cout<<x<<endl;
    }
    if(x==1){
        cout<<"X is Power of 2"<<endl;
    }else{
        cout<<"X is not power of 2"<<endl;
    }
}
int main()
{
    powerOf2(32);
    return 0;
}