#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string lines;
    cin>>T;
    cin.ignore();
    while(T--){
        getline(cin,lines);
        stringstream ss(lines);
        vector<long long> nums;
        long x;
        while(ss>>x){
            nums.push_back(x);
        }
        cout<<nums.size()<<endl;
        nums.clear();
    }
    return 0;
}