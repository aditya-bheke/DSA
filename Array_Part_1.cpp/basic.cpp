#include<iostream>
using namespace std;

int main()
{
    int marks[5]={10,20,30,40,50};
    cout<<marks[0]<<endl;//accessing elements in a array
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;//out of bound
    cout<<marks[-1]<<endl;//out of bound gives random value
    marks[0]=70;//modifying elements in array
    //cout<<marks<<endl; to print entire array for loop is used
    cout<<marks[0]<<endl;


    int sz=sizeof(marks)/sizeof(int);//it gives the storage space taken by marks ie. 4 bytes*5=20 so it will be 20.
    //so we need divide it by the 4 ie.size of int/size of each block.
    
//Taking inputs from user to put in array
    int size=5;
    int count[size];
    for(int i=0;i<size;i++){//taking input by cin
        cout<<i<<"th element ";
        cin>>count[i];
    }
    for(int i=0;i<size;i++){//print elements in array
        cout<<count[i]<<endl;
    }
    return 0;
}
