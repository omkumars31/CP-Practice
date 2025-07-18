#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> same(n);
        for(int i = 0; i < n; i++) {
            cin >> same[i];
        }
        if(same[0] == same[n - 1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << same[n - 1] << " ";
            for(int i = 0; i < n - 1; i++) {
                cout << same[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
