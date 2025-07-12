#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = 0;
        int right = n-1;
        int result = n;
        // result ko size kardeng
        while(s[left] != s[right] && result>0){
            left++;
            right--;
            result-=2;
        }
        cout << result << endl;

    }
    return 0;
}
