#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (n == 1) {
            cout << "No" << endl;
            continue;
        }

        // Step 1: Check if original array is deranged
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());

        bool is_deranged = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] == sorted_arr[i]) {
                is_deranged = false;
                break;
            }
        }

        if (!is_deranged) {
            cout << "No" << endl;
            continue;
        }

        // Step 2: Try removing one element at a time
        bool found = false;
        vector<int> best;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                if (j != i) temp.push_back(arr[j]);
            }

            // Check if temp is deranged
            vector<int> sorted_temp = temp;
            sort(sorted_temp.begin(), sorted_temp.end());

            bool temp_deranged = true;
            for (int k = 0; k < temp.size(); k++) {
                if (temp[k] == sorted_temp[k]) {
                    temp_deranged = false;
                    break;
                }
            }

            if (temp_deranged) {
                if (!found || temp < best) {
                    best = temp;
                    found = true;
                }
            }
        }

        if (found) {
            cout << "Yes" << endl;
            cout << best.size() << endl;
            for (int x : best) cout << x << " ";
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}