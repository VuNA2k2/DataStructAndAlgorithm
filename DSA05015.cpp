#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;
vector<vector<int>> a(1001, vector<int> (1001));

long long fac(int k) {
    int s = 1;
    for(int i = 1; i <= k ; i ++) {
        s = ((s%MOD) * (i%MOD))%MOD;
    }
    return s;
}

void P(){
    a[0][0] = 1;
    for(int i = 1; i <= 1000; i ++) {
        a[i][0] = 1;
        for(int j = 1; j <=1000 ; j ++) {
            if(i == 0||i == j) a[i][j] = 1;
            else a[i][j] = (a[i-1][j-1] + a[i-1][j]) % MOD;
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << ((a[n][k]%MOD) * (fac(k)%MOD)) % MOD;
}

int main()
{
    faster();
    int t;
    cin >> t;
    P();
    while(t--)
    {
        solve();
        cout << endl;
    }
}