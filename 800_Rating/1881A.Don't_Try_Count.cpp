#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    string temp = x;
    for(int i=0;i<=6;i++){
        if(temp.find(s) != string :: npos){
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



/* 
#include<bits/stdc++.h>
using namespace std;



bool check(string s, string x){
    if(x.length() < s.length()){
        return false;
    }
    for(int i=0;i<x.length() - s.length() + 1; i++){
        if(x.substr(i, s.length()) == s){
            return true;
        }
    }
    return false;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , m;
        cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;
        
        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;


        long long ans = -1;
        if(check(s,x0)){
            ans = 0;
        }
        else if(check(s,x1)){
            ans = 1;
        }
        else if(check(s,x2)){
            ans = 2;
        }
        else if(check(s,x3)){
            ans = 3;
        }
        else if(check(s,x4)){
            ans = 4;
        }
        else if(check(s,x5)){
            ans = 5;
        }

        cout << ans << endl;
        
    }
}
*/



#include <bits/stdc++.h> 
  
#define mod (100001)
#define ll long long

int main() {
    using namespace std;

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	int t;
	cin >> t;

	int n, m;

	int count = 0;
	int ans[mod] {};

	string s1, s2;
	for (int i = 0; i < t; i++) {
		count = 0;
		cin >> n >> m;

		cin >> s1 >> s2;

		while (s1.find(s2) == string::npos) {
			s1.append(s1);
			count++;
			if (count >= n * m) {
				count = -1;
				break;
			}
		}

		ans[i] = count;
	}

	for (int i = 0; i < t; i++) {
		cout << ans[i];
		if (i != t - 1)
			cout << endl;
	}

	return 0;
}