#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int size1,int size2){
    //int count=0;    dont write it here orelse you get only one value
    for(int i=0;i<size1;i++){
        int count=0;
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                break;//here break is written to tackle the condition in which one number is present more than once in this case it is 3 in arr2 if match is found bw arr1 and arr2 then count will increase and loop will be terminated
            }
        }if(count==1){//it is correct because in case of duplicates in arr2 we have used break so count will be 1
            cout<<arr1[i]<<" ";
        }
    }
}
int main()
{
    int arr1[]={1,2,3,4,5};//if there are duplicates in arr1 we need to write code to handle them 
    int arr2[]={3,3,4,5};//we have handled duplicates in arr2 using break
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    intersection(arr1,arr2,size1,size2);
    return 0;
}