#include<iostream>
using namespace std;
bool is_power_2(int n){
    while(n>1){//not >= because when n=1 then it will fail modulus test and give false
        if(n%2!=0){
            return false; //odd number is not power of two so directly eliminate the possiblity from here only
        }
        n=(n>>1);//right shift makes the number half
    }
    return true;
}
int main()
{
    if(is_power_2(32)==1){
        cout<<"It is power of two "<<endl;
    }else{
        cout<<"Not Power of Two "<<endl;
    }
    return 0;
}