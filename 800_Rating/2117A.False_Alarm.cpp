#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                left = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 1) {
                right = i;
                break;
            }
        }

        if (left == -1 || right == -1) {
            // No 1 found
            cout << "YES" << endl;
        } else {
            int target = (right - left + 1);
            if (x >= target) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
