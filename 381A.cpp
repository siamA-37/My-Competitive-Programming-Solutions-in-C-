#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s=0,d=0;
    cin>>n;
    vector<int>game;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        game.push_back(k);
    }
    int first,last;   
    int i=0;
    while(! game.empty()){
        first=game.front();
        last=game.back();
        if(i%2==0){
            if(first > last){
                s+=first;
                game.erase(game.begin());
            }else{
                s+=last;
                game.pop_back();
            }
        }

        else{
            if(first > last){
                d+=first;
                game.erase(game.begin());
            }
            else{
                d+=last;
                game.pop_back();
            }
        }
        i++;
    }
    cout<<s<<" "<<d<<endl;


    return 0;
}
