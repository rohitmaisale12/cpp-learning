#include<set>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    set<int>s;
    cout<<"enter the elements in set="<<endl;
    //inserting elements into set//
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int x;
    cout<<"enter the element to search="<<endl;
    cin>>x;
    //checking if element exists//
    if(s.find(x)!=s.end()){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}
