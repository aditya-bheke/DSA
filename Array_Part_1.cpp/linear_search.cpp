#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){//while giving parameters if we write int arr just it will be a variable not a array so write int arr[]
    for(int i=0;i<size;i++){//The issue arises because the array size cannot be directly determined inside the function when you pass the array as a parameter.
        if(arr[i]==target){
            return i;
        }
    }return -1;
}
int main()
{
    int array[]={4,2,7,8,1,2,5}; 
    int target=90;
    int size=sizeof(array)/sizeof(int);
    cout<<linearSearch(array,size,target)<<endl;
    return 0;
}