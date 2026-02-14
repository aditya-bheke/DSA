#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Bubble Sort
    for(int i=0;i<=n-2;i++){//here we want to run the loop for n-1 elements
        int didSwap=0;
        for(int j=1;j<=n-i-1;j++){//loop to compare adjacent elements
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                didSwap=1;
            }
        }
        if(didSwap==0){
            cout<<"Executed at O(n) Time Compexity in 1st iteration of i."<<endl;
            break;
        }
    }
    //Bubble Sort Ends
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}