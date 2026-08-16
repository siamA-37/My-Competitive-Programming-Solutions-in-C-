#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    string str;
    cin>>str;
    s.push_back(str);
    sort(s[0].begin(),s[0].end());
    auto n=unique(s[0].begin(),s[0].end());
    s[0].erase(n,s[0].end());
    int sz=s[0].size();
    if(sz%2 !=0 ){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}