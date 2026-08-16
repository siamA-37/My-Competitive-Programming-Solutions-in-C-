#include<bits/stdc++.h>
using namespace std;

int main()
{
    string numbers;
    int T;
    vector<long long>nums;//practrised code for lined string to long long int convertion 
    cin>>T;
    cin.ignore();
    while(T--){
        getline(cin,numbers);
        cout<<"Inputed String : "<<numbers<<endl;
        stringstream ss(numbers);
        int x;
       
        while(ss>>x){
            nums.push_back(x);
        }
        for(auto x:nums){
            cout<<x<<" ";
        }
        cout<<"\nSize of Nums : "<<nums.size()<<endl;
        nums.clear();
    }
    
    return 0;
}