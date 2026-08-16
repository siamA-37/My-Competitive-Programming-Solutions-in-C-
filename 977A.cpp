#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;

    cin>>n>>k;
    while(k--){
        if(n%10 == 0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}
