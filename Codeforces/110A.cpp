#include<bits/stdc++.h>
using namespace std;
int main()
{
    string names;
    int count=0;
    cin>>names;
    for(int i=0;i<names.size();i++){
        if(names[i]=='4' || names[i]=='7'){
            count++;
        }
    }
    if(count == 7 || count == 4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
