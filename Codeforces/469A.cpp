#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p,q;
    cin>>n;
    vector<int>level(n);
    for(int i=0;i<n;i++){
        level[i]=i+1;
    }
    cin>>p;
    vector<int>xpass(p);
    for(int i=0;i<p;i++){
        cin>>xpass[i];
    }
    cin>>q;
    vector<int>ypass(q);
    for(int i=0;i<q;i++){
        cin>>ypass[i];
    }
    xpass.insert(xpass.end(),ypass.begin(),ypass.end());

    sort(xpass.begin(),xpass.end());

    int index = unique(xpass.begin(),xpass.end())-xpass.begin();
    xpass.erase(xpass.begin()+index,xpass.end());

    if(xpass == level){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    return 0;
}
