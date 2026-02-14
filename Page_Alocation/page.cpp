#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedPAges){//maxAllowedPages is mid only each student should have pages less than mid
    int stud=1;//start with one student and once each student gets enough books increase the number of studets
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPAges){//pages in the book is greater than mid{6,1,4} mid is 6 so it is not possible for this mid
            return false;
        }
        if(arr[i]+pages<=maxAllowedPAges){//add pages till they do not exceed maxAllowedPages
            pages+=arr[i];//update the number of pages with the student
        }else{
            stud++;//increase the number of students in case pages exceed mid ir. maxAloowedPages
            pages=arr[i];//set value of pages to arr[i] for the new student
        }
        
    }if(stud>m){//if the number of students here if greter than m the this mid is false=
        return false;
    }else{
        return true;
    }

}
int allocateBooks(vector<int> &arr,int n,int m){
    if(m>n){//students are greater than no. of books
        return -1;
    }
    int st=0;
    int sum=0;
    int ans=-1;//-1 so that if ans does not gets updated in below loop it gets returned as -1
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;//upper limit of range

    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;//set ans as mid so that mid remains the least max value at last
            end=mid-1;//Left mein search
        }
        else{
            st=mid+1;//Right mein Search
        }
    }return ans;
}
int main()
{
    vector<int> arr={2,1,3,4};
    int n=4,m=2;
    cout<<allocateBooks(arr,n,m);
    
    return 0;
}