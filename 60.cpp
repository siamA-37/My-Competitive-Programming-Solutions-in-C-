#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n1,n2,n3,temp=0,i=0;
    cin>>T;
    while (T--){
        cin>>n1>>n2>>n3;
        if(n1>n2){
            temp=n1;
            n1=n2;
            n2=temp;
        }
        //temp=0;
        if(n2>n3){
            temp=n2;
            n2=n3;
            n3=temp;
        }
        if(n1>n2){
            temp=n1;
            n1=n2;
            n2=temp;
        }
        i++;
        cout<<"Case "<<i<<": "<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    
    return 0;
}