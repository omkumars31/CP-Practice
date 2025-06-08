#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalDots = 0;
        bool hasThreeConsecutiveDots = false;

        for(int i = 0; i < n; i++){
            if(s[i] == '.') {
                totalDots++;
                // Check for three consecutive empty cells
                if(i <= n - 3 && s[i+1] == '.' && s[i+2] == '.') {
                    hasThreeConsecutiveDots = true;
                }
            }
        }

        if(hasThreeConsecutiveDots){
            cout << 2 << endl;
        } else {
            cout << totalDots << endl;
        }
    }
    return 0;
}
