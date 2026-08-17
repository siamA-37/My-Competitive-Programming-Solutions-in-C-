#include<bits/stdc++.h>
using namespace std; 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//to boost speed of input output//
#define endl '\n'
int main()
{
    optimize(); 

    string s1;
    cin>>s1;

    string temp=s1;
    reverse(temp.begin(),temp.end());
    if(temp == s1){
        cout<<"Pallindrom"<<endl;
    }
    else{
        cout<<"Not Pallindrom"<<endl;
    }

    /*--------------------------------------------------------------------------------------------//
    int t;
    cin>>t;             //----------input string with space --------------------------//
    for(int i=0;i<t;i++){
        string s2;
        cin.ignore();-use this to get right output 
        //char c;
        //cin>>c;//or use this with s=c+s format.
        getline(cin,s2);

        cout<<"Test Case "<< i<<" : "<<s2<<endl;
    }
    //----------------------------------------------------------------------------------------------------*/
    return 0;
}