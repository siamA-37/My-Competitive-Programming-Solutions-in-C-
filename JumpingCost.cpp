#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<int>arr;
    int T,N,A,sum=0,mx=0,positive_sum=0;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>A;
            arr.push_back(A);
        }
        for(int i=0,j=1;i<N;i++,j++){

            //int j=i+1;
            sum+=arr[j]-(j+1)+i;
            mx=max({mx,sum});
               
        }

        cout<<mx<<endl;
        arr.clear();
        mx=0;
        sum=0;
    }

    return 0;
}
