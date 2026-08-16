#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,moves=0,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        while(a%b != 0){
            moves++;
             ++a;
        }
        cout<<moves<<endl;
        moves=0;
    }
    
    return 0;
}
