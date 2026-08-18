#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            for(int j=1;j<=m;j++){
                cout<<"#";
                if(j == m){
                    cout<<endl;
                }
            }
        }
        else if(i % 2 == 0 && i % 4 != 0){
            for(int l=1;l<=m;l++){
                if(l != m)cout<<".";

                else if(l == m){
                    cout<<"#"<<endl;
                }
            }
        }
        else if( i % 2 == 0 && i % 4 == 0){
            for(int l=1;l<=m;l++){
                if(l==1){
                    cout<<"#";
                }
                else if(l != 1 && l!= m){
                    cout<<".";
                }
                else if(l == m){
                    cout<<"."<<endl;
                }
            }
        }
    }
    return 0;
}
