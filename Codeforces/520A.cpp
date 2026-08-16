#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string pangram;
    cin>>n;
    cin>>pangram;
    transform(pangram.begin(),pangram.end(),pangram.begin(),::tolower);
    sort(pangram.begin(),pangram.end());
    int index=unique(pangram.begin(),pangram.end())-pangram.begin();
    if(index>=26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
