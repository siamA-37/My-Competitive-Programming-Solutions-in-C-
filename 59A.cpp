#include<bits/stdc++.h>
using namespace std;
int main()
{
    string names;
    cin>>names;
    int h=0,l=0;
    for(int i=0;i<names.size();i++){
        if(names[i]>='A' && names[i] <='Z'){
            h++;
        }
        else{
            l++;
        }
    }
    if(l>=h){
        transform(names.begin(),names.end(),names.begin(),::tolower);
    }
    else{
         transform(names.begin(),names.end(),names.begin(),::toupper);
    }
    cout<<names<<endl;
    return 0;
}
