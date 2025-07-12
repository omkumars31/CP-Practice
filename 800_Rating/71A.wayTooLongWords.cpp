#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
    string s;
    cin >> s;
    int m = s.size();
    int i = 0;
    int j = m-1;
    
    if(m <= 10){
        cout << s << endl;
    }
    else{
        cout << s[0] << j-i-1  << s[m-1]<< endl;
    }
 }
 return 0;

}