#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,num=0;
    cin>>T;
    while(T--){
        cin>>N;
        num+=1;
        cout<<"Case "<<num<<":";
        for(int i=1;i<=N;i++){
            if(N%i==0){
                cout<<" "<<i;
                
            }
        }
        cout<<'\n';
    }
    
    return 0;
}