#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2;
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int l=0;l<5;l++){
            cin>>matrix[i][l];
            if(matrix[i][l] == 1){
                s1=i;
                s2=l;
            }
        }
    }
    int moves=abs(s1-2)+abs(s2-2);
    cout<<moves<<endl;
    return 0;
}