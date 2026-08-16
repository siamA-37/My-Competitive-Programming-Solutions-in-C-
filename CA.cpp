#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int L,R;
    cin>>L>>R;
    bool f=false;
    
    for(int i=L;i<=R;i++){
        if(i%2 == 0){
            f=true;
            break;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
