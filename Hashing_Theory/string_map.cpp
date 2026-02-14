#include<iostream>
#include<map>
using namespace std;

int main()
{
    string st;
    cin>>st;

    map<char,int> mpp;
    for(int i=0;i<st.size();i++){
        mpp[st[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mpp[ch]<<endl;

    }
    return 0;
}