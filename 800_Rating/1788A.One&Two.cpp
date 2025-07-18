#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long total = 0;
        long long curr = 0;
        
        for(int i=0;i<n;i++){
            if(a[i] == 2){
                total++;
            }
        }
        int ans = -1;
        for(int k=0;k<n;k++){
            if(a[k] == 2){
                curr++;
            }
            if(curr == total - curr){
                ans = k+1;
                break;
            }
        }
        cout << ans << endl;
    }
}