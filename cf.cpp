#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,num,mn=0,mx=0;
    cin>>T;
    vector<int>test;
    while(T--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            test.push_back(num);//wrong//not accepted
        }
        if(n<2){
            cout<<"no"<<endl;
        }
        sort(test.begin(),test.end());
        mx=test[(n/2)+1];
        mn=test[n/2];
        if((mx-1)>mn){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        test.clear();
        mx=0;
        mn=0;
    }
}