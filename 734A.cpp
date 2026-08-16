#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A=0,D=0;
    string winners;
    cin>>n;
    cin>>winners;
    for(int i=0;i<n;i++){
        if(winners[i] == 'A'){
            A++;
        }
        else if(winners[i] == 'D'){
            D++;
        }
    }
    if(A>D){
        cout<<"Anton"<<endl;
    }
    else if(A<D){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
