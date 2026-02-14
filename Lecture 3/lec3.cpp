#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"ENter n "<<endl;
//     cin>>n;
//     if(n>=0){
//         cout<<"Positive"<<endl;
//     }else{
//         cout<<"Negative"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int a;
//     cout<<"Enter age "<<endl;
//     cin>>a;
//     if(a>=18){
//         cout<<"You are eligible to vote."<<endl;
//     }else{
//         cout<<"You are not eligible to vote.";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number n "<<endl;
//     cin>>n;
//     if(n%2==0){
//         cout<<"Even"<<endl;
//     }else{
//         cout<<"Odd"<<endl;
//     }
// }

// int main(){
//     int marks;
//     cout<<"Enter Marks "<<endl;
//     cin>>marks;
//     if(marks>=90){
//         cout<<"A"<<endl;
//     }else if(marks>=80 && marks<90){
//         cout<<"B"<<endl;
//     }else if(marks>=70 && marks<80){
//         cout<<"C"<<endl;
//     }else{
//         cout<<"D"<<endl;
//     }
//     return 0;
// }

////Ternairy operator/condition shoerter form of if else

// int main(){
//     int n=45;
// cout<<(n>=0? "Positive":"Negative")<<endl;;
//return 0;
// }

//While Loop

// int main(){
//     int count=1;
//     while(count<=5){
//         cout<<count<<endl;
//         count+=1;
//     }
//     return 0;
// }

// int main(){
//     int n,count=1;
//     cout<<"Enter n "<<endl;
//     cin>>n;
//     while(count<=n){
//         cout<<count<<endl;
//         count++;
//     }
//     return 0;
// }

//for loop


int main(){
    int n=15;
    for(int i=1;i<=n;i+=2){
        cout<<i<<endl;
    }
    return 0;
}