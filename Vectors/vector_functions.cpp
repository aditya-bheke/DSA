#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char>vec={'a','b','c','d'};//these functions also work on the other data types like char,etc.
    cout<<vec.size()<<endl;//return the size of vector
    vector<int>vec1={1,2,3,4,5};
    cout<<vec1.size()<<endl;
    vec1.push_back(6);//adds the given element from the back of the vector
    vec1.push_back(7);
    for(int i : vec1){
        cout<<i<<endl;
    }
    vec1.pop_back();//removes the element at back ie. last elemnt from the vector
    vec1.pop_back();
    cout<<vec1.back()<<endl;//back() returns the value of the last element in the vector
    cout<<vec1.front()<<endl;//front() returns the value of the first eleent in the vector
    cout<<vec1.at(3)<<endl;//at() returns the element at the specified index
    return 0;
}