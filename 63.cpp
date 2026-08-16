#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    
    return n*factorial(n-1);
}
int main() {
    int T;
    long long fact,n;
    cin>>T;
    while(T--){
        cin>>n;
        fact=factorial(n);
        cout<<fact<<endl;
    }
    return 0;
}
