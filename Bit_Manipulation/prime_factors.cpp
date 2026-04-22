#include<bits/stdc++.h>
using namespace std;
vector<int> prime_factors(int n){
    if(n<=1) return {0};
    vector<int>ans;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ans.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        ans.push_back(n);
    }
    return ans;
// Example: n = 84

// 84 ÷ 2 = 42
// 42 ÷ 2 = 21
// 21 ÷ 3 = 7
// 7 is prime

// Factorization: 2 × 2 × 3 × 7

// Time complexity: O(√n)
}
int main(){
    int n;
    cin>>n;
    vector<int> result=prime_factors(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}