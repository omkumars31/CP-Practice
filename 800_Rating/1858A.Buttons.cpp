#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int anna_moves = a + (c + 1) / 2;
        int katie_moves = b + c / 2;

        if(anna_moves > katie_moves){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
}
