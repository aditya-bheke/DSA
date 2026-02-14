#include<iostream>
#include<vector>
using namespace std;
int binary_Search(vector<int> arr,int target){
    int size=arr.size();
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;//2nd half
        }else if(target<arr[mid]){
            end=mid-1;//1st half
        }else{
            cout<<"The target is at index ";
            return mid;
        }
    }return -1;
}
int main()
{
    vector<int> arr={-1,2,6,8,9,45,56};//odd
    int target=9;

    vector<int> arr1={-1,2,6,8,9,45,56,65};//even
    int target1=9;

    cout<<binary_Search(arr,target)<<endl;
    cout<<binary_Search(arr1,target1)<<endl;
    return 0;
}