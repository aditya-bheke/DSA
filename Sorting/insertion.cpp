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

    //Insertion Sort
    for(int i=0;i<=n-1;i++){//loop to run n-1 ie. all elements till the last
        int j=i;//it indicates how many max iterations are possible
        while(j>0 && arr[j-1]>arr[j]){//it runs untill j>0 or till previous elemnt is greater than current element
            swap(arr[j-1],arr[j]);
            j--;
        }
    }//Insertion Sort Ends

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}