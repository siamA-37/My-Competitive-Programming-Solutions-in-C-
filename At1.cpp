#include<bits/stdc++.h>
using namespace std;
int main()
{
    string chairs;
    int n,num=0;
    cin>>n;
    cin>>chairs;
    
    for(int i=0;i<n;i++){
        if(chairs[i]=='x'){
            if(i==0 || chairs[i-1] =='x'){
                if(i==(chairs.size()-1) || chairs[i+1] == 'x'){
                    num++;
                }
            }
        }
    }
    cout<<num<<endl;
    return 0;
}