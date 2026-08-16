#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cost,unit;
    cin>>unit;
    if(unit <=200){
        cost=500+(unit-100)*7;
    }
    if(unit<=100){
        cost=5*unit;
    }
    if(unit>200){
        cost=1200+(unit-200)*10;
    }
    cout<<cost<<endl;
    return 0;
}