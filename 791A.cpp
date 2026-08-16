#include<bits/stdc++.h>
using namespace std;
int main() {
    int lw,bw;
    int i;
    cin>>lw>>bw;
    for(i=0;;i++){
        if(lw>bw){
            break;
        }
        lw*=3;
        bw*=2;
    }
    cout<<i<<endl;
    return 0;
}
