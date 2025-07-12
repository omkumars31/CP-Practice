#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;

        bool found = false;
        for (long long y = 0; y <= 100 && k * y <= n; ++y)
            if ((n - k * y) % 2 == 0) {
                found = true;
                break;
            }

        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
