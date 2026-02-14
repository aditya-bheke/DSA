#include<iostream>
using namespace std;

int main(){
    int a, b;
    
    // Prompt user for input
    cout << "Enter two integers: " << endl;
    
    // Input validation can be added here
    cin >> a >> b;
    
    // Output the result
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
    
    return 0;
}
