#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> b(n), a;

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        a.push_back(b[0]);
        for(int i = 1; i < n; i++) {
            if (b[i] >= b[i - 1]) {
                a.push_back(b[i]);
            } else {
                // Decrease from b[i-1] to b[i]
                for (long long val = b[i - 1] - 1; val >= b[i]; val--) {
                    a.push_back(val);
                }
                a.push_back(b[i]);
            }
        }

        cout << a.size() << "\n";
        for(int i = 0; i < a.size(); i++) {
            cout << a[i] << (i == a.size()-1 ? '\n' : ' ');
        }
    }

    return 0;
}
