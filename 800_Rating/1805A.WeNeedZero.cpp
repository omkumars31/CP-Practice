#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int aXor = 0;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            aXor ^= arr[i];
        }

        // if it is even
        if(n % 2 == 0){
            if(aXor == 0){
                cout << 0 << endl;
            }
            else{
                cout << -1 << endl; 
            }
        }
        else{
            cout << aXor << endl;
        }
          
    }
    return 0;
}