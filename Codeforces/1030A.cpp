#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,op;
    bool easy=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>op;
        if(op==1){
            easy=false;
            break;
        }
    }
    if(easy){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    return 0;
}