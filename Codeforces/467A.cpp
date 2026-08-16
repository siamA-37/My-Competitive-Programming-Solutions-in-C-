#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,living,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        living = q-p;
        if(living >=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}