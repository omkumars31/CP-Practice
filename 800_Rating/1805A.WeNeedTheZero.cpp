#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int xorA = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            xorA ^= a[i];

        }
        if(xorA == 0) {
            cout << 0 << endl;
        }
        else{
            if(n % 2 == 1){
                cout << xorA << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}