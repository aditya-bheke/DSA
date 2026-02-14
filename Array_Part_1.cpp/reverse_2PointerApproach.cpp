#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){//we have not written start<=large because at equal to no need of swapping as both are same why waste one step
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //cout<<arr<<endl;    we can't print array like this we need for loop 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }  
}
int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=sizeof(arr)/sizeof(int);
    reverseArray(arr,size);
    return 0;
}