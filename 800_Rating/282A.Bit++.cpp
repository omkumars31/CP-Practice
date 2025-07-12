#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X = 0;
    
    string op;
    while (n--) {
        cin >> op;
        if (op == "++X" || op == "X++") {
            X++;
        } else if (op == "--X" || op == "X--") {
            X--;
        }
    }

    cout << X << endl;
    return 0;
}
