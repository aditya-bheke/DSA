#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;//map<char,int> mpp; for string
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;//mpp[s[i]]++; for string
    }
    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}