#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,mx=1,count=1;
    vector<int> c;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        c.push_back(num);
    }
    sort(c.begin(),c.end());
    for(int l=1;l<n;l++){
        if(c[l] == c[l-1]){
            count++;
           
        }
        else{
         
            mx=max({mx,count});
            count=1;
        }
    }
    mx=max({mx,count});
    cout<<(n-mx)<<endl;
    c.clear();
    return 0;
}
