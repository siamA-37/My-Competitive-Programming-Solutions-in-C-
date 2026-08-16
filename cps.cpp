#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int> u(n);
        for(int i=0;i<u.size();i++) cin>>u[i];

        int sz=unique(u.begin(),u.end())-u.begin();

        if(sz==x)cout<<"Good"<<endl;
        else if(sz>x)cout<<"Average"<<endl;
        else cout<<"Bad"<<endl;
    }
    return 0;
}