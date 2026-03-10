#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the total elements";
    cin>>n;
    vector<int>v;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    cout<<"sum="<<sum;
    return 0;
}
