#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,n,sum=0;
    cin>>T;
    while(T--){
        cin>>n;
        vector<int>mirror(n*2);
        for(int i=0;i<n*2;i++){
            cin>>mirror[i];
        }
        //input done
        for(int i=0;i<mirror.size();i++){
            if(mirror[i] < mirror[(n*2)-1-i] && i<((n*2)-1-i)){
                swap(mirror[i],mirror[(n*2)-1-i]);
            }
        }
        for(int i=0;i<n;i++){
            sum+=mirror[i];
        }
        cout<<sum<<endl;
        sum=0;
        mirror.clear();
    }
}
