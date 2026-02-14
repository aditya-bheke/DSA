#include<iostream>
using namespace std;
int is_power(int n){
    if(n>0 && (n&(n-1))==0){
        return 1;
    }
    return 0;
}
int main()
{
    if(is_power(0)==1){
        cout<<"Power of 2"<<endl;
    }else{
        cout<<"Not power of 2"<<endl;
    }
    return 0;
}