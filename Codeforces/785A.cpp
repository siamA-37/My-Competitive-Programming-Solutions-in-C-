#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,faces=0;
    string names;
    cin>>n;
    while(n--){
        cin>>names;
        if(names == "Tetrahedron"){
            faces+=4;
        }
        if(names == "Cube"){
            faces+=6;
        }
        if(names == "Octahedron"){
            faces+=8;
        }
        if(names =="Dodecahedron" ){
            faces+=12;
        }
        if(names == "Icosahedron"){
            faces+=20;
        }
    }    
    cout<<faces<<endl;
    return 0;
}
