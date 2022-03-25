#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n+1), dp(s+2,0);
    dp[0] = 1;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        dp[a[i]] = 1;
        for(int j = s; j >= a[i]; j --) {
            if(!dp[j]&& dp[j-a[i]]) dp[j] = 1;
        }
    }
    if(dp[s]) cout << "YES";
    else cout << "NO";
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