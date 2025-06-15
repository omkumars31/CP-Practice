#include <iostream>
using namespace std;

typedef long long ll;

ll max_shashliks(ll k, ll a, ll b, ll x, ll y) {
    // Prefer the type with smaller temperature drop
    if (x > y) {
        swap(a, b);
        swap(x, y);
    }

    // How many portions of first type can be cooked
    ll cnt1 = 0;
    if (k >= a) {
        cnt1 = (k - a) / x + 1;
        k -= cnt1 * x;
    }

    // Then cook second type
    ll cnt2 = 0;
    if (k >= b) {
        cnt2 = (k - b) / y + 1;
    }

    return cnt1 + cnt2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        cout << max_shashliks(k, a, b, x, y) << '\n';
    }

    return 0;
}
