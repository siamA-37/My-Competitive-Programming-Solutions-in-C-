#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string ss;
        cin>>ss;
        s.push_back(ss);
    }
    int groups=1;
    for(int i=1;i<n;i++){
        if(s[i] != s[i-1]){
            groups++;
        }
    }
    cout << groups << endl;
    return 0;
}