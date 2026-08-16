#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int last_digit=N%10;
        int first_digit=N/pow(10,4);
        cout<<"sum = "<<first_digit+last_digit<<endl;
    }
    return 0;
}