#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    vector<int> mat(5);
    for(int i=0;i<5;i++){
        for(int i=0;i<5;i++){
            cin>>mat[i];
        }
        v.push_back(mat);
    }
    for(auto x:v){
        for(auto y:x){
            cout<<y<<endl;
        }
    }
    return 0;
}