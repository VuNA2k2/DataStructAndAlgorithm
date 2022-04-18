#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<vector<long long>> res(26,vector<long long>(26,1));

void sinh() {
    res[0][0] = 0;
    for(int i = 1; i <= 25; i ++) {
        for(int j = 1; j <= 25; j ++) {
            res[i][j] = res[i-1][j] + res[i][j-1];
        }
    }
}

void solve()
{
    int n , m;
    cin >> n >> m;
    cout << res[n][m];
}

int main()
{
    faster();
    sinh();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}