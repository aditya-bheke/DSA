#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){//the loop will never run for n=2,3 because of root condition
        if(n%i==0) return false;
    }
    return true;
// Example: n = 29

// √29 ≈ 5
// Check 2, 3, 4, 5 → none divide → prime

// Time complexity: O(√n)
}
int main(){
    int n;
    cin>>n;
    cout<<(isprime(n)?"Prime":"Not Prime");
    return 0;
}