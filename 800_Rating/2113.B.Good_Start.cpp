#include <iostream>
#include <cmath>
using namespace std;

string solve() {
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        if (abs(y1 - y2) % b == 0)
            return "Yes";
        else
            return "No";
    }

    if (y1 == y2) {
        if (abs(x1 - x2) % a == 0)
            return "Yes";
        else
            return "No";
    }

    if ((abs(x1 - x2) % a == 0) || (abs(y1 - y2) % b == 0))
        return "Yes";
    
    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
