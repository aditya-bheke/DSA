#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> nums,int target){//function vector data type is declared like this
    vector<int>ans;//new vector to store the answer 
    int size=nums.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);//add the index of the pairs 
                ans.push_back(j);
                return ans;
            }
        }
    }return ans;
}
int main()
{
    vector<int> nums={2,7,11,15};
    int target=13;
    vector<int> ans = PairSum(nums,target);//ans vector stores the indexes of the pair
    if(ans.size()>=2){//to avoid segemntation error
        cout<<ans[0]<<","<<ans[1]<<endl;//print indexes
    }
    return 0;
}