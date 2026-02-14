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
    //Selection Sort
    for(int i=0;i<=n-2;i++){//element is selected for swapping from 0th index to n-2th(not n-1 because at n-2th element the array will be sorted) index
        int min_index=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);//you can also swap by temp variable use
    }
    //Selection sort ends

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
