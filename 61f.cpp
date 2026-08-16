#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,root,N;
    cin>>T;
    while (T--)
    {
        cin>>N;
        root=sqrt(N);
        if(root*root == N){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}