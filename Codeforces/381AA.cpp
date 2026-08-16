#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> game(n);//my type copy version

    for (int i = 0; i < n; i++) {
        cin >> game[i];
    }

    int i = 0;
    int sum = 0, sum1 = 0;

    while (!game.empty()) {
        int x = game.front();
        int y = game.back();

        if (i % 2 == 0) {
            if (x > y) {
                sum += x;
                game.erase(game.begin());
            } else {
                sum += y;
                game.pop_back();
            }
        } else {
            if (x > y) {
                sum1 += x;
                game.erase(game.begin());
            } else {
                sum1 += y;
                game.pop_back();
            }
        }

        ++i;
    }

    cout << sum << " " << sum1 << endl;

    return 0;
}