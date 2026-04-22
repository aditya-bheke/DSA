#include<bits/stdc++.h>
using namespace std;

int sumN(int n){
    if(n==1){
        return 1;
    }

    return n + sumN(n-1);
}

int arraySumN(int arr[],int n){
    if(n==-1){
        return 0;
    }

    return arr[n] + arraySumN(arr,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = (sizeof(arr)/sizeof(int))-1;
    cout<<sumN(5)<<endl;
    cout<<arraySumN(arr,n);
    return 0;
}