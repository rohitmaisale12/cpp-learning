#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;//increase frequency of element//
    }
    int maxfreq=0;
    int element;
    //loop through map to find most frequent element//
    for(auto x:freq){
        if(x.second>maxfreq){
            maxfreq=x.second;
            element=x.first;
        }
    }
    cout<<"most frequent element="<<element;
    return 0;
}

