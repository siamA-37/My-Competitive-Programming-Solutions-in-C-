#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    vector<pair<int,int>> teams(n);
    for(int i=0;i<n;i++){
        cin>>teams[i].first>>teams[i].second;
    }
    for(int i=0;i<n;i++){
        for(int l=0;l<n;l++){
            if(i != l){
                if(teams[i].first == teams[l].second){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
