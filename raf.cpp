#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={3,2,2,3};
    int i=0;
    int val=3;
    for(auto &x:v){
        if(val!=x){
            v[i]=x;
            i++;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<'\n';
    cout<<"Index : "<<i<<endl;
}