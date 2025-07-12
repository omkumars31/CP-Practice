#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        multiset<char> m;
        for(auto x: s){
            m.insert(x);
        }

        for(int i = 0; i < 10; i++){
            for(char d = '0'; d <= '9'; d++){
                auto it = m.find(d);
                if(it != m.end() && (d - '0') >= (10 - i - 1)){
                    cout << d;
                    m.erase(it);
                    break;
                }
            }
        }
        cout << endl;
    }
}
