#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int res = 0, s = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        if(s < 0) s = 0;
        s += a[i];
        res = max(res,s);
    }
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