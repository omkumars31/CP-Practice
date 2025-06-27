#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Read the array (not used in logic)
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if n is odd
    if (n & 1) {
        // If odd, print 4 operations
        cout << "4\n";
        cout << "1 " << n - 1 << '\n';
        cout << "1 " << n - 1 << '\n';
        cout << n - 1 << " " << n << '\n';
        cout << n - 1 << " " << n << '\n';
    } else {
        // If even, print 2 operations
        cout << "2\n";
        cout << "1 " << n << '\n';
        cout << "1 " << n << '\n';
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}