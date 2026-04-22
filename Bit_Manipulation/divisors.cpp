#include<bits/stdc++.h>
using namespace std;
vector<int> divisors(int n){
    vector<int>ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
// Example: n = 36

// Pairs:
// 1 & 36
// 2 & 18
// 3 & 12
// 4 & 9
// 6 & 6

// Divisors: 1,2,3,4,6,9,12,18,36

// Time complexity: O(√n)
}
int main(){
    int n;
    cin>>n;
    vector<int> result=divisors(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}