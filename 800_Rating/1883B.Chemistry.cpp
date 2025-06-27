#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int k){
    unordered_map<char,int> freq;
    
    for(char c: s){
        freq[c]++;
    }
    int oddCount = 0;
    for(auto [c,count] : freq){
        if(count%2 != 0){
            oddCount++;
        }
    }
    if(k >= oddCount -1 && k < s.size()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;
        if(solve(s,k)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
    return 0;
}