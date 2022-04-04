#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+2);
    for(int i = 1; i <= n; i ++) cin >> a[i];
    a[0] = -1e9;
    a[n+1] = 1e9;
    int imax = n+1;
    vector<int> l(n+2,1);
    int res = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j < i; j ++) {
            if(a[j] <= a[i]) l[i] = max(l[i], l[j] + 1);
            res = max(res,l[i]);
        }
    }
    cout << n-res;
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