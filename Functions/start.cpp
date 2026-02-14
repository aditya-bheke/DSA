#include<iostream>
using namespace std;
void printHello(){//Function defintion
    cout<<"Hello"<<endl;//here we are only printing and hence we use void because we dont have ti return anything
}
int printHelloo(){//Function defintion
    cout<<"Helloo"<<endl;//in case we want to return a value
    return 3;
}
int main(){//functionc call/Invoke
    printHello();


    // int val=printHelloo();        long approach
    // cout<<"val "<<val;

    cout<<printHelloo()<<endl;

    return 0;
}