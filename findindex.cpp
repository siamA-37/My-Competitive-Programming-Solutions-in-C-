#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,4,2,8};
    cout<<"Finfd Max Element: "<<endl;
    auto mx=max_element(v.begin(),v.end());
    cout<<"Max Number : "<<*mx<<endl;
    cout<<"Find Index Of Max Number - "<<endl;
    int index=max_element(v.begin(),v.end())-v.begin();
    cout<<"Index Of Max Element : "<<index<<endl;
    return 0;
}