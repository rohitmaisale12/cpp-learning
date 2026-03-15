#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int>q;
    //pushing elements//
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int sum=0;
    //calculate sum//
    while(!q.empty()){
        sum=sum+q.front();
        q.pop();
    }
    cout<<"Sum = "<<sum;
    return 0;
}
