#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,4,2,8};
    for(auto x:v){
        cout<<x<<endl;
    }
    cout<<"Sort the Vector"<<endl;
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<endl;
    }
    cout<<"Reverxe The Program"<<endl;
    reverse(v.begin(),v.end());
     for(auto x:v){
        cout<<x<<endl;
    }
    cout<<"Erase index 1 : "<<endl;
    v.erase(v.begin()+1);
    for(auto x:v){
        cout<<x<<endl;
    }
    vector<int> x={10,10,5,5,10};
    sort(x.begin(),x.end());
    auto e=unique(x.begin(),x.end());
    cout<<"Printing Unique elements only"<<endl;
    for(auto i=x.begin();i<e;i++){
        cout<<*i<<endl;
    }
    x.erase(unique(x.begin(),x.end()),x.end());
    cout<<"Printing Unique elements only"<<endl;
    for(auto s:x){
        cout<<s<<endl;
    }
    return 0;
}