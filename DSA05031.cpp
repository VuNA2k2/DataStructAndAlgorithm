#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> a(105, 0);

void Pow() {
    for(int i = 1; i < a.size(); i ++) a[i] = i * i;
}

void solve()
{
    int s;
    cin >> s;
    vector<vector<int>> dp(105, vector<int> (s + 1, 0));
    for(int i = 0; i <= s; i ++) dp[0][i] = i;
    for(int i = 1; i <= 100; i ++) {
        for(int j = 1; j <= s; j ++) {
            dp[i][j] = dp[i-1][j];
            if(j - a[i] >= 0) dp[i][j] = min(dp[i][j], dp[i][j-a[i]] + 1);
        }
    }
    cout << dp[100][s];
}   

int main()
{
    faster();
    int t;
    cin >> t;
    Pow();
    while(t--)
    {
        solve();
        cout << endl;
    }
}