#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"enter the n number of elements=";
    cin>>n;
    stack<int>st;
    cout<<"enter the elements="<<endl;
    //push numbers 1 to 5//
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<"expected output="<<endl;
    //printing them while popping//
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
