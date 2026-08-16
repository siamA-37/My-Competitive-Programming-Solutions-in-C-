#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>colors(4);
    for(int i=0;i<4;i++)cin>>colors[i];
    sort(colors.begin(),colors.end());
    int sz=unique(colors.begin(),colors.end())-colors.begin();
    cout<<(4-sz)<<endl;
    return 0;
}