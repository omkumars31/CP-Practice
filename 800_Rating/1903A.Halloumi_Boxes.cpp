#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        int ans[k];
        for (int i = 0; i < k; i++) {
            cin >> ans[i];
        }

        if (is_sorted(ans, ans + k) || n > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
