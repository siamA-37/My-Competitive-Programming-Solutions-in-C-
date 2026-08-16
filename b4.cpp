#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    int x=0;
    while(t--){
        cin>>s;
        if(s.find('+') != string::npos){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}