#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){//lines
        for(int j=0;j<(n-i-1);j++){//spaces
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){//pattern 1
                cout<<j+1;
        }
        for(int j=i;j>0;j--){//pattern 2
            cout<<j;
        }
        cout<<endl;
    }return 0;
}