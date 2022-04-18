#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1,0), l(n+1,0), r(n+1,0);
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        l[i] = r[i] = a[i];
    }
    for(int i = 1; i < n; i ++) {
        for(int j = 1; j < i; j ++) {
            if(a[i] > a[j]) l[i] = max(l[i], a[i] + l[j]);
        }
    }
    for(int i = n - 1; i >= 0; i --) {
        for(int j = n; j > i; j --) {
            if(a[i] > a[j]) r[i] = max(r[i], a[i] + r[j]);
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i ++) res = max(res, l[i] + r[i] - a[i]);
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