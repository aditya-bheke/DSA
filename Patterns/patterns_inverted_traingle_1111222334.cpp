#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){//spaces
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){//num
            cout<<i+1 ;
        }cout<<endl;
    }return 0;
}