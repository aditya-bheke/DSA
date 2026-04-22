#include<bits/stdc++.h>
using namespace std;

int minbitsflip(int start,int goal){
    int n = start ^ goal;
    int cnt=0;
    while(n>0){
        if((n & 1) == 1){//Here we check if the last bit is 1 if its 1 then we count it
            cnt++;
        }
        n=n>>1;//we right shift the number so we can calculate all the count of set bits
    }
    return cnt;
    
}
int main(){
    int start,goal;
    cin>>start;
    cin>>goal;
    int ans=minbitsflip(start,goal);
    cout<<ans<<endl;
    return 0;
}