#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), l(n,1), r(n,1);
    for(int i = 0; i < n ; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i < n ; i ++) {
        if(a[i] > a[i-1]) l[i] = l[i-1] + 1;
    }
    for(int i = n-2; i >= 0; i --) {
        if(a[i] > a[i+1]) r[i] = r[i+1] + 1;
    }
    int res = 0;
    for(int i = 0; i < n ; i ++) res = max(res, l[i] + r[i] - 1);
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