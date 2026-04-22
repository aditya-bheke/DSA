#include<bits/stdc++.h>
using namespace std;

int countprimes(int n){
    if(n<=2) return 0;
    vector<int> isprime(n,1);//if you want upto n then do (n+1,1)
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<n;i++){//if you want upto n then make i*i<=n
        if(isprime[i]==1){
            for(int j=i*i;j<n;j+=i){//if you want upto n then make j<=n
                isprime[j]=0;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(isprime[i]==1) cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int result=countprimes(n);
    cout<<result;
    return 0;
}