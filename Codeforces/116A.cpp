#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,enter,exit;
    cin>>n;
    int crnt=0;
    int mx=0;
    while(n--){
       
        cin>>exit>>enter;
        crnt-=exit;
        crnt+=enter;
        mx = max(mx,crnt);
    }
    cout<<mx<<endl;
    return 0;
}