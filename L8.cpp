#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,k,x,count,mx;
    string s;
    cin>>T;
    while(T--){
        cin>>k;
        count =0;
        mx=0;
        for(int i=0;i<k;i++){
            cin>>x;
            mx=max(mx,x);
            if(x>=2){
                count++;
            }
            
        }
        if(mx>=3 || count>=2){

            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }
    }
    return 0;
}