#include <iostream>
using namespace std;
void prime(int n){
    if(n==1){
        cout<<"Nor Prime Nor Composite"<<endl;
        return;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime"<<endl;
    }else if(count>2){
        cout<<"Composite"<<endl;
    }
}
int main() {
    prime(3);
    return 0;
}


// #include<iostream>
// using namespace std;
// int prime(int n){
//     for(int i=2;i<n;i++){//this is the range in which the the 1 and number itself is not taken into consideration. 
//     //so if any match is found in this range then the number is not prime.
//         if (n%i==0 && n!=2){
//             return 1; 
//         }
//     }
//     return 0;
// }
// int main(){
//     if (prime(59)==1){
//         cout<<"Not Prime"<<endl;
//     }else{
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }       
