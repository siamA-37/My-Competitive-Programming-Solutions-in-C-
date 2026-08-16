#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,moves=0;
    cin>>x;
    while(x!=0)
    {
        if(x>=5){
            moves+=x/5;
            x=x-((x/5)*5);
        }
        if(x>=4){
            moves+=x/4;
            x=x-((x/4)*4);
        }
        if(x>=3){
            moves+=x/3;
            x=x-((x/3)*3);
        }
        if(x>=2){
            moves+=x/2;
            x=x-((x/2)*2);;
        }
        if(x>=1){
            moves+=x/1;
            x=0;
        }

    }
    cout<<moves<<endl;
    return 0;
}
