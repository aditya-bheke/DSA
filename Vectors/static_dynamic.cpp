#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;//see how size and capacity differs 
    vec.push_back(0);
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl<<endl<<endl;

    vec.push_back(1);
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl<<endl<<endl;

    vec.push_back(2);
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl<<endl<<endl;

    vec.push_back(3);
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl<<endl<<endl;

    vec.push_back(4);
    cout<<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl<<endl<<endl;
    return 0;
}