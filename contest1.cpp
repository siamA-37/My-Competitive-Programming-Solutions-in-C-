#include<bits/stdc++.h>
using namespace std;
int test(int &a,int &b,int &c){
    int count=0;
    int mx,mn;
    for(;;){
        if((a==b || b==c || a==c)){
        return count;
        break;
        }
        else{
            mx=max(a,b,c);
            mn=min(a,b,c);
            a=mx-1;
            b=mn+1;
            count++;
        }    
    }
}
int main()
{
    int a,b,c;
    int n;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        count=test(&a,&b,&c);
        cout<<count;
    }
    return 0;
}