#include<iostream>
using namespace std;
void swapMinMAx(int arr[],int size){
    int small_index=0;
    int large_index=0;
    int small=INT_MAX;
    int large=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
            small_index=i;
        }else if(arr[i]>large){
            large=arr[i];
            large_index=i;
        }
    }
    swap(arr[small_index],arr[large_index]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={2,4,6,5,8};
    int size=sizeof(arr)/sizeof(int);
    swapMinMAx(arr,size);
    
    return 0;
}