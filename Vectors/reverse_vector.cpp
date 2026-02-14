#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int>& nums,int size){//&(ampercent) is used to pass the vector by reference so that the changes made in here are also reflected in the original vector
    int start=0;
    int end=size-1;
        while(start<end){
            swap(nums.at(start),nums.at(end));
            start++;
            end--;
        }for(int val : nums){
            cout<<val<<" ";
        }cout<<endl;
}

int main()
{
    vector <int> vec={2,3,4,5,6};
    int size=vec.size();//sizeof() is not used in vector it is used in array
    reverse(vec,size);
    return 0;
}