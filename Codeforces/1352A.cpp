#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> ans;
    int power = 1; 
    
    while (n > 0) {
        int rem = n % 10;
        
        if (rem != 0) { 
            ans.push_back(rem * power);
        }
        
        n /= 10;       
        power *= 10;  
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
