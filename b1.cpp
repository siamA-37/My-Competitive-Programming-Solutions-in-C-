#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>words;
    int n;
    cin>>n;
    while(n--){
        string w;
        cin>>w;
        words.push_back(w);
        int i=0;
        if(words[0].size()<=10){
            cout<<words[0]<<endl;
        }
        else{
            for(auto it=words[0].begin()+1;it != words[0].end()-1;it++){
                i++;
            }
            cout<<words[0][0]<<i<<words[0][words[0].size()-1]<<endl;
        }
        words.clear();
    }
    return 0;
}