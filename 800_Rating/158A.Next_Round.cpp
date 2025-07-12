#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b && (a ^ 1) > b)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    if (a > b && (a ^ 1) == b)
    {
        cout << y << endl;
        return;
    }
    while (b > a)
    {
        if (a % 2)
        {
            ans += x;
            a++;
        }
        else
        {
            ans += min(x, y);
            a++;
        }
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}