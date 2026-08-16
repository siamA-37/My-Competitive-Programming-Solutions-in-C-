#include<bits/stdc++.h>
using namespace std;
vector<string>test(vector<string>colors){
    vector<string>result;
    for(auto &x:colors){
        auto it=find_if(x.begin(),x.end(),[](char c){
            return isdigit(c);
        });
        if(it!=x.end()){
            result.push_back(x);
        }
    }
    return result;
}
int main()
{
    vector<string>colors;
    for(;;){
        //cin.ignore();
        string input;
        cin>>input;
        colors.push_back(input);
        if(cin.peek()=='\n'){
            cout<<"Input Terminated!\n\n"<<endl;
            break;
        }
        //cin.ignore();
    }
    cout<<"Print Those which You gave input \n"<<endl;

    for(auto &x:colors){
        cout<<x<<endl;
    }
    cout<<"------------------------------------------------------\n";
    vector<string>result=test(colors);
    if(!(result.empty())){
        for(auto x:result){
            cout<<x<<endl;
        }
    }
    else{
        cout<<"Not Found !"<<endl;
    }
    return 0;
}