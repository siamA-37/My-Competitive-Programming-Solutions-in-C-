#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,X1,Y1,X2,Y2;
    cin>>T;
    while(T--){
        cin>>X1>>Y1>>X2>>Y2;
        if(((X1+X2)%2) != ((Y1+Y2)%2) ){
            cout<<"-1"<<endl;
        }
        else if((X1==X2) &&(Y1==Y2)){
            cout<<"0"<<endl;
        }
        else if(abs(X1-X2) == abs(Y1-Y2)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
}
