#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minSteps = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            minSteps = min(minSteps, abs(arr[i]));
        } else {
            minSteps = 0; // already has a zero
            break;
        }
    }

    cout << minSteps << endl;

    return 0;
}
