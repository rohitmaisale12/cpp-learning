#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the total elements size=";
    cin>>n;
    vector<int>v;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int largest=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>largest){
            largest=v[i];
        }
    }
    cout<<"largest element is="<<largest;
    return 0;
}
