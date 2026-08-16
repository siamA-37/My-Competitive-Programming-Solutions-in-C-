#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nums;
    cin>>nums;
    string s;
    for(int i=nums+1;;i++){
        s=to_string(i);
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]){
            cout<<s<<endl;
            break;
        }
    }
    return 0;
}