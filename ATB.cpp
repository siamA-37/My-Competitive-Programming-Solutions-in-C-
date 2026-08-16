#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s1;
    int n,count=0,mx=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s1.push_back(s);
    }
    for(int i=0;i<n;i++){
        transform(s1[i].begin(),s1[i].end(),s1[i].begin(),::tolower);
    }
    for(int i=0;i<n;i++){
        
        for(int l=0;l<n;l++){
            if(s1[i] == s1[l]){
                count++;
            }
        }
        mx=max(mx,count);
        count=0;
    }
    cout<<mx<<endl;
}