#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,fun=0;
    cin>>n;
   
    if(n%2 == 0){
        fun=n/2;
    }
    else{
        fun=-(n+1)/2;
    }
    cout<<fun<<endl;
    return 0;
}