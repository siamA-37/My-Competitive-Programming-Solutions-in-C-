#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,l,m,n,d,damaged=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l == 1 || m ==1 || n == 1){
        cout<<d<<endl;
    }
    else{
        int mn = min({k,l,m,n});
        for(int i=mn;i<=d;i++){
            if(i%k == 0){
                damaged++;
            }
            if(i%l == 0 && i%k != 0){
                damaged++;
            }
            if(i%m == 0 && i%k !=0 && i%l != 0){
                damaged++;
            }
            if(i%n == 0 && i%k != 0 && i%l != 0 && i%m != 0){
                damaged++;
            }
        }
        cout<<damaged<<endl;
    }
    return 0;
}
