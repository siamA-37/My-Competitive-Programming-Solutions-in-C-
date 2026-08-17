#include<bits/stdc++.h>
using namespace std;
int birthday_cake(vector<int> candles)
{
    int tallest=0;
    int s=candles.size();
    int mx=*(max_element(candles.begin(),candles.end()));
    for(int i=0;i<s;i++){
        if(candles[i]==mx){
            tallest++;
        }
    }
    return tallest;
    
}

int main()
{
    long n;
    cin>>n;
    vector<int>candles(n);
    for(int i=0;i<n;i++){
        cin>>candles[i];
    }
    int tallest=birthday_cake(candles);
    cout<<tallest<<endl;
    return 0;
}