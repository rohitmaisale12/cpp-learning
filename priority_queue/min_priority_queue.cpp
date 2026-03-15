#include<iostream>
#include<queue>
using namespace std;
int main(){
    //min priority queue//
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(20);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
