#include<bits/stdc++.h>
using namespace std;
vector<string> test(vector<string> names){
    for(int i=0;i<names.size();i++){
        names[i][0]=toupper(names[i][0]);
        for(int l=1;l<names[i].size();l++){
            names[i][l]=tolower(names[i][l]);
        }

    }
    return names;

}
int main()
{
    vector<string>colors={"red","green","bLack","wHite","pink"};
    for(auto x:colors){
        cout<<x<<endl;
    }
    cout<<"Answer\n\n"<<endl;
    vector<string> result=test(colors);

    for(auto x:result){
        cout<<x<<endl;
    }

    return 0;
}