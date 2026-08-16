#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,moves=0,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b == 0){
            moves=0;
        }
        else{
            moves=b-(a%b);
        }
        cout<<moves<<endl;
    }
    
    return 0;
}
