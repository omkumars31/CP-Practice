#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        bool isSorted = true;
        int minDiff = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
            if (i > 0) {
                // Check if array is sorted
                if (nums[i] < nums[i - 1]) isSorted = false;

                // Compute minimum difference between adjacent elements
                minDiff = min(minDiff, nums[i] - nums[i - 1]);
            }
        }

        if (!isSorted) {
            cout << 0 << '\n';
        } else {
            // Minimum operations needed = ceil(minDiff / 2.0)
            cout << (minDiff / 2 + 1) << '\n';
        }
    }

    return 0;
}
