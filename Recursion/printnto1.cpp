#include<bits/stdc++.h>
using namespace std;
void printnums(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printnums(n-1);

}
int main(){
    printnums(5);
    return 0;
}