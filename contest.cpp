#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(3);
    int t,count=0;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        while(true){
            sort(v.begin(),v.end());
            if(v[0]==v[1] || v[1]==v[2] || v[0] ==v[2]){
                break;
            }
            else{
                v[0]++;
                v[2]--;
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}