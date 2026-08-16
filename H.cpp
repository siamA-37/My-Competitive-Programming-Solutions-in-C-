#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,ar,peri;
    cin>>l;
    cin>>b;
    ar=l*b;
    peri=2*(l+b);
    if(ar>peri){
        cout<<"Area"<<'\n'<<ar<<endl;
    }
    else if(ar<peri){
        cout<<"Peri"<<'\n'<<peri<<endl;
    }
    else{
        cout<<"Eq"<<'\n'<<ar<<endl;
    }
    return 0;
}