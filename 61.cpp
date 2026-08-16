#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int root,N;
    double root_f;
    cin>>T;
    while(T--){
        cin>>N;
        root=sqrt(N);
        root_f=sqrt(N);
        if((float)root == root_f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}