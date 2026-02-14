#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector <int>& nums,int target){
    int count=-1;
    for(int val : nums){
        count++;
        if(val==target){
            return count;
        }
    }return -1;
}
int main()
{
    vector <int> vec={2,5,89,5,4};
    int target=89;
    cout<<linearSearch(vec,target)<<endl;
    return 0;
}