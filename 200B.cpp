#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum =0.0;
    cin>>n;
    //vector<int> juice(n);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    sum=sum/100.0000000000000000000;
    double result = (sum/(double)n)*100.000000;
    cout<<fixed<<setprecision(12)<<result<<endl;
    return 0;
}