#include<bits/stdc++.h>
using namespace std;
string test(vector<string>names){
    for(auto ch:names.at(1)){
        if(names.at(0).find(toupper(ch)==string::npos) &&(names.at(0).find(tolower(ch)) == string::npos)){
            return "false";
        }
    }
    return "true";
}

int main()
{
    vector<string>names={"siam","Siam"};
    cout<<"Input Strings are given below "<<endl;
    for(auto x:names){
        cout<<x<<"\t";
    }
    cout<<"\n\n";
    string result=test(names);
    cout<<"---------Result---------"<<endl;
    cout<<result<<endl;
    return 0;
}