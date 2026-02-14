#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,15,22,1,-15,24};
    int size=sizeof(arr)/sizeof(int);
    int small_index=0,large_index=0;
    int smallest=INT_MAX;//we can also use arr[0]but int_max means infinity
    int largest=INT_MIN;//here also int_min means negative infinity so it will get definitely updates
    for(int i=0;i<size;i++){//we can also use min,max instead of if statements whose syntax is 
    //smallest=min(arr[i],smallest);  and largest=max(arr[i],largest);
        if(arr[i]<smallest){
            smallest=arr[i];
            small_index=i;//here we give the value of current i in if statement to small_index and it gets updated if the if statement is executed
            
        }else if(arr[i]>largest){
            largest=arr[i];
            large_index=i;//here we give the value of current i in if statement to large_index and it gets updated if the else if statement is executed
        }
    }cout<<"Smallest value "<<smallest<<endl;
    cout<<"largest value "<<largest<<endl;
    cout<<"Smallest value index "<<small_index<<endl;
    cout<<"largest value index "<<large_index<<endl;
    return 0;
}