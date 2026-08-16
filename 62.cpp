#include<bits/stdc++.h>
using namespace std;
int main() {
    int T,r1,r2,B;
    double curr_rr,req_rr;
    cin>>T;
    while(T--){
        cin>>r1>>r2>>B;
        curr_rr=(double)((double)r2/(300-B))*6;
        req_rr=((double)(r1-r2+1)/B)*6;
        cout<<fixed<<setprecision(2)<<curr_rr<<" "<<req_rr<<endl;
    }
    return 0;
}
