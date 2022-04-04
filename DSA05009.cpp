#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        sum += a[i];
    }
    vector<int>  dp(sum/2+2,0);
    dp[0] = 1;
    for(int i = 1; i <= n; i ++) {
        dp[a[i]] = 1;
        for(int j = sum / 2; j >= a[i]; j --) {
            if(!dp[j]&& dp[j-a[i]]) dp[j] = 1;
        }
    }
    if(dp[sum / 2] && sum % 2 == 0) cout << "YES";
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