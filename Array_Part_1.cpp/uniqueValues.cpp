#include<iostream>
using namespace std;
void uniqueValues(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;//i want to reset the count after every execution of inner loop to check every number orelse the count will keep on increasing if it is kept outside
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        
        }if(count==1){//count will be one only when it appears one time and count will become 1 from 0 when i=j ie. both i and j are same. so it means that the digit has occoured only once.
            cout<<arr[i]<<" ";
        }
    }

}

int main()
{
    int arr[]={1,2,3,2,2,3,4,5,6,4,6};
    int size=sizeof(arr)/sizeof(int);
    uniqueValues(arr,size);
    return 0;
}