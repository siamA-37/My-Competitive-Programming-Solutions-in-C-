#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,ans=0;
    vector<int> a;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int>a;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            a.push_back(in);
        }
        ans=a[0];
        for(int i=1;i<n;i++){
            ans = max(ans,a[i]-a[i-1]);
        }
        ans = max(ans,2*(x-a[n-1]));
        cout<<ans<<endl;
    }
    return 0;
}