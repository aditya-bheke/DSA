#include<iostream>
using namespace std;
// int main(){
//     char n;
//     cout<<"ENter a character "<<endl;
//     cin>>n;
//     if((int)n>=65 && (int)n<91){
//         cout<<"Uppercase"<<endl;
//     }else if((int)n>=97 && (int)n<123){
//         cout<<"Lowercase"<<endl;
//     }else{
//         cout<<"Enter Valid Alphabet"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int p,sum=0;
//     cout<<"ENter a number "<<endl;
//     cin>>p;
//     for(int i=1;i<=p;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
//     return 0;

// }

// int main(){
//     int p,i=1,sum=0;
//     cout<<"ENter a number "<<endl;
//     cin>>p;
//     while(i<=p){
//         sum+=i;
//         i++;
//     }cout<<"Sum "<<sum<<endl;
//     return 0;
// }

// int main(){
//     int n,sum=0;
//     cout<<"ENter a number "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }cout<<"Sum "<<sum<<endl;
//     return 0;
// }

// int main(){
//     int n,count=0;
//     cout<<"Enter n"<<endl;
//     cin>>n;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }if(count>0){
//         cout<<"Not Prime"<<endl;
//     }else if(n==1){
//         cout<<"Neither Prime Nor Non Prime"<<endl;
//     }else{
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int m,n;
//     cout<<"Enter m,n"<<endl;
//     cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
// }

// int main(){
//     int n,sum=0;
//     cout<<"Enter n "<<endl;
//     cin>>n;    
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }cout<<"Sum "<<sum<<endl;
//     return 0;
// }

int main(){
    int n,fact=1;
    cout<<"Enter n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }cout<<"Factorial "<<fact;
    return 0;
}