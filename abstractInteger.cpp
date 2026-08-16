#include<bits/stdc++.h>
using namespace std;
string test(string time){
    int h=stoi(time.substr(0,2));
    
    string period=time.substr(8,2);
    string result=time.substr(0,8);
    if(period == "AM" && h==12){
        result=result.replace(0,2,"00");
    }
    if(period == "PM" && h!=12){
        if(h<12){
            result = result.replace(0,2,to_string(12+h));
        }
    }
    return result;
}

int main()
{
    string time;
    cin>>time;
    cout<<test(time);
    return 0;
}
//07:05:45PM