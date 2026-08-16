#include<bits/stdc++.h>
using namespace std;

vector<string>test(vector<string>colors){
    for(auto &x:colors){
        transform(x.begin(),x.end(),x.begin(),::tolower);
        x[0]=toupper(x[0]);
    }
    return colors;
}


int main()
{
    vector<string>colors={"rED","green","bLack","wHite","pink"};
    vector<string>result=test(colors);
    cout<<"------------Result----------"<<endl;
    for(auto x:result){
        cout<<x<<endl;
    }
    return 0;
}