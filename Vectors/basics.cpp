#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>size_0_vec;//defining a vector
    vector<int>vec={1,2,3};//another method
    vector<int>vec1(3,0);//here 0 will be printed in first 3 places
    cout<<vec[0]<<endl;
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    for(int i : vec){//for loop syntax
        cout<<i<<endl;
    }
    return 0;
}