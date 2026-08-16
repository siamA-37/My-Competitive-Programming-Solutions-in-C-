#include<bits/stdc++.h>
using namespace std;
vector<int>test(vector<int>recieve){
    vector<int>result;
    int n;
    for(int i=0;i<recieve.size();i++){
        if(recieve[i] <38){
            result.push_back(recieve[i]);
        }
        else{
            for(int j=1;j<=5;j++){
            if(recieve[i]%5 == 0){
                result.push_back(recieve[i]);
            }
            else{
                recieve[i]++;
            }
        }
        }
    }
    return result;

}

int main()
{
    int n;
    cin>>n;
    vector<int>marks(n);
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    vector<int>result = test(marks);
    for(auto x:result){
        cout<<x<<endl;
    }
    return 0;
}