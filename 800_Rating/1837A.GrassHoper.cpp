#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;

        if (x % k != 0) {
            cout << 1 << "\n";
            cout << x << "\n";
        } else {
            // Find two values a, b such that a + b = x and both not divisible by k
            for (int a = 1; a < x; ++a) {
                int b = x - a;
                if (a % k != 0 && b % k != 0) {
                    cout << 2 << "\n";
                    cout << a << " " << b << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}
