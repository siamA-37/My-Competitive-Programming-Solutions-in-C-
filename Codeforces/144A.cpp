#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>heights(n);
    int mx_indx=0,mn_indx=0;
    for(int i=0;i<n;i++)cin>>heights[i];
    int mx=*max_element(heights.begin(),heights.end());
    int mn=*min_element(heights.begin(),heights.end());
    for(int i=0;i<n;i++){
        if(heights[i] == mx){
            mx_indx=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(heights[i] == mn){
            mn_indx=i;
        }
    }
    int moves=mx_indx;
    moves+=n-1-mn_indx;
    if(mx_indx > mn_indx){
        moves--;
    }
    cout<<moves<<endl;
    return 0;
}
