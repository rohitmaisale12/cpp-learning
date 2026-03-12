#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"enter the element =";
    cin>>n;
    map<int,int>m;
    cout<<"enter the values =";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){// checking if number is even//
            m[x]++;
        }
    }
    cout<<"hence the total even numbers are ="<<endl;
    for(auto x:m){//auto x is short form of pair<int,int>x//
        cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}
