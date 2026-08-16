#include<bits/stdc++.h>
using namespace std;
string test(vector<string> names){
    if(names.size()==0) return "";
    string prefix=names[0];
    for(int i=1;i<names.size();i++){
        while(names[i].find(prefix) !=0){
            prefix=prefix.substr(0,prefix.size()-1);
            if(prefix.empty()){
                return "";
            }
        }
    }
    return prefix;
}
int main()
{
    vector<string> names={"ww","ww","werw"};
    string result=test(names);
    cout<<result<<endl;
    return 0;
}