#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=1;i<=N;i++){
            for(int l=1;l<=N;l++){
                cout<<"*";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}