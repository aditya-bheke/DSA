#include<iostream>
using namespace std;
int sum(int n){
    int add=0;
    while(n>0){
        int i=n%10;//get the last digit
        n=n/10;//remove the last digit as it is taken
        add=add+i;
    }
    return add;
}
int main()
{
    
    cout<<sum(14598)<<endl;     
    return 0;
}