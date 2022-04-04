#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i = 0; i < n ; i ++) cin >> a[i];
    int id = 0;
    for(int i = 0; i < n; i ++) {
        if(a[i] > a[id] && a[i] <= x) id = i;
    }
    if(a[id] > x) cout << -1;
    else cout << id + 1;
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