#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t,n,d,a,b,way=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=2){
            //cout<<0<<endl;
            way=0;
            
        }
        else{
            way=floor((n-1)/2);
        }
        cout<<way<<endl;
        way=0;
    }
    return 0;
}
