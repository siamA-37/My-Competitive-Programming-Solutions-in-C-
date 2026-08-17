#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int dollars,bills=0;
    cin>>dollars;
    
    if(dollars >= 100){
        bills+=dollars/100;
        dollars%=100;
    }
    if(dollars>=20 && dollars<100){
        bills+=dollars/20;
        dollars %= 20;
    }
    if(dollars>=10 && dollars<20){
        bills+=dollars/10;
        dollars %=10;
    }
    if(dollars >=5 && dollars <10){
        bills+=dollars/5;
        dollars %= 5;
    }
    if(dollars>=1 && dollars <5){
        bills+=dollars;
    }
    cout<<bills<<endl;
    return 0;
}
