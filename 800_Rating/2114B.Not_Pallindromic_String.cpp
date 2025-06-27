#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Count number of 0s and 1s
    int count0 = 0;
    int count1 = 0;
    
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }

    int mn = max(count0, count1) - n / 2;
    int mx = count0 / 2 + count1 / 2;

    if (k >= mn && (k - mn) % 2 == 0 && k <= mx) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }

        

    return 0;
}
