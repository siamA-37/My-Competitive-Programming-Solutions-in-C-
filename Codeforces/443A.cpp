#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int index=0;
    string alphabets="";
    string letters;
    cin.ignore();
    getline(cin,letters);

    for(int i=0;i<letters.size();i++){
        if(letters[i] >='a' && letters[i] <='z'){
            alphabets+=letters[i];
        }
    }
    
    if(alphabets.empty()){
        cout<<0<<endl;
    }
    else{
        sort(alphabets.begin(),alphabets.end());
        index = unique(alphabets.begin(),alphabets.end())-alphabets.begin();
        cout<<index<<endl;
    }
    return 0;
}
