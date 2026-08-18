#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    string s="bbddaacc";
    sort(s.begin(),s.end());
    cout<<"Sorted String : ";
    cout<<s<<endl;
    int sz = unique(s.begin(),s.end())-s.begin();
    cout<<"Unique String is : ";
    for(int i=0;i<sz;i++)cout<<s[i];
    cout<<endl;
    cout<<"------------------Max element and Min Element------------\n\n";
    auto mx=max_element(s.begin(),s.end());
    auto mn =min_element(s.begin(),s.end());
    cout<<"Max Element : "<<*mx<<" Min Element : "<<*mn<<endl;
    cout<<"------------Erase a character------------"<<endl;
    s.erase(s.begin());
    cout<<s<<endl;
    //Remove all same character in a range 
    s="aabbbssskk";
    s.erase(remove(s.begin(),s.end(),'s'),s.begin()+6);
    cout<<s<<endl;
    
    return 0;
}