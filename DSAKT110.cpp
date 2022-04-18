#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), dp(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    if(n == 1) {
        cout << a[0];
        return;
    }
    if(n == 2) {
        cout << max(a[0],a[1]);
        return;
    }
    int res = 0;
    dp[0] = a[0];
    dp[1] = max(a[0],a[1]);
    dp[2] = max(a[0] + a[2], a[1]);
    res = max(res, dp[2]);
    for(int i = 3; i < n; i ++) {
        dp[i] = a[i] + max(dp[i-2], dp[i-3]);
        res = max(res, dp[i]);
    }
    cout << res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}