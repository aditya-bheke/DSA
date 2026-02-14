
#include<iostream>
//#include<algorithm>
using namespace std;

int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    //Nested Pairs
    pair<int,pair<int,int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    //Array as a pair
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    return 0;
}