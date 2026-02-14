#include<iostream>
using namespace std;

int main()//TC=O(n^2)
{
    //int arr[5]={1,2,3,4,5};
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN;
    for(int start=0;start<n;start++){
        int current_sum=0;
        for(int end=start;end<n;end++){// we have not used the third for loop because we dont need to print the subarrays .
            current_sum+=arr[end];//we have used this so we calculate the sum of subarray from start to end and WHEREVER THE SUM IS MAX IT WILL BE STORED DOWN IN THE max_sum. we will get the ans
            max_sum=max(current_sum,max_sum);
        }
    }cout<<max_sum;
    return 0;
}