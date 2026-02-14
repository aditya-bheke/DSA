#include<iostream>
using namespace std;

int main()
{
    //Create and build a array
    int arr_size;
    cin>>arr_size;
    int arr[arr_size];
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }
    //Precompute the frequncies ie.hash array
    int hash_range;
    cin>>hash_range;
    int hash[hash_range]={0};//initialize the array with zeroes at all 13 indexes so that the incementation occours properly otherwise wrong incrementation will happen
    for(int i=0;i<arr_size;i++){
        hash[arr[i]] += 1;//this increses the frequency of the number in the array at its index in hash array like at index 1 i hash array the frequency of number 1 will be increased
    }

    int query;
    cin>>query;//number of numbers whose frequncies has to be checked
    while(query--){//decrements query each iteration when query becomes zero it stops
        int number;
        cin>>number;//number to be checked
        //fetch frequency
        cout<<hash[number]<<endl;//prints frequncy of the number from the hash array
    }

    return 0;
}