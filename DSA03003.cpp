#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    sort(a.begin(),a.end());
    long long s = 0;
    for(int i = 0 ; i < n ; i ++) s += a[i]*i;
    cout << s % MOD;
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