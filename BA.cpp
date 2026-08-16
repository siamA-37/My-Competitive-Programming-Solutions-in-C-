#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            bool s=true;
            for(int i=0;i<n-1;i++){
                if(vec[i]>vec[i+1]){
                    s=false;
                    break;
                }
            }
            if(s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    

    return 0;
}
