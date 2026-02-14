#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //precompute
    int hash_size;
    cin>>hash_size;//256 for all characters letters numbers symbols ASCII code
    int hash[hash_size]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;//hash[s[i]-'a']++ when all lowercase are present hence hash_size is 26
    }
    int query;
    cin>>query;
    while(query--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;//hash[c-'a'] for lowercase only . also s[c] means hash converts s[c] inti integer and find the index
    }
    return 0;
}   