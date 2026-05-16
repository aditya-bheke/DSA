#include<bits/stdc++.h>
using namespace std;

bool isPali(string s){
    string orig = s;
    reverse(s.begin(),s.end());
    if(s==orig){
        return true;
    }
    return false;
}

void getAllParts(string s,vector<vector<string>>&ans,vector<string>&partitions){
    if(s.size()==0){
        ans.push_back(partitions);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part = s.substr(0,i+1);
        if(isPali(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1),ans,partitions);
            partitions.pop_back();
        }
    }
}

int main(){
    string s = "aab";
    vector<vector<string>>ans;
    vector<string>partitions;
    getAllParts(s,ans,partitions);

    cout << "{" << endl;
    
    for (int i = 0; i < ans.size(); i++) {

        cout << "{ ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << "}," << endl;
    }

    cout << "}";
    return 0;
}