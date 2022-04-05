#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n ; i ++) cin >> a[i];
    sort(a.begin(), a.end());
    cout << max(a[0] * a[1], max(a[0] * a[1] * a[n - 1], max(a[n - 1] * a[n - 2], a[n - 1] * a[n - 2] * a[n - 3])));
}

int main()
{
    faster();
    solve();
}