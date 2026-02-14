#include<iostream>
#include<vector>
using namespace std;
int maj_elem(vector<int> nums){
    int size=nums.size();
    int majority=nums[0];
    for(int i=0;i<size;i++){
        int count=0;//count should reset for each element
        for(int j=i+1;j<size;j++){//i+1 because we will compare all elements after i hence we have take count>= size/2 not count>size/2 because we dont count i itself
            if(nums[i]==nums[j]){
                count++;
            }
            if(count>=size/2){
                    majority=nums[i];
                    return majority;
                }
        }
    }return majority;//O(n^2)
}
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<maj_elem(nums)<<endl;
    return 0;
}