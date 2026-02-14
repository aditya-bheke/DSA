#include <iostream>
#include <queue>
using namespace std;


//Uncomment the line below for ascending order
priority_queue<int, vector<int>, greater<int>> pq;
//priority_queue<int> pq;//for descending order

int main()
{
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(30);
    pq.push(15);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}