#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        vector<pair<int, int>> dirs = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<int, int>> st1, st2;

        for (auto [dx, dy] : dirs) {
            st1.insert({x1 + dx, y1 + dy});
            st2.insert({x2 + dx, y2 + dy});
        }

        int ans = 0;
        for (auto it : st1) {
            if (st2.count(it)) ans++;
        }
        cout << ans << endl;
    }
}
