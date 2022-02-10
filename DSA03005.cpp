#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n,k;
    cin >> n >> k;
    if(k >= n-k) k = n - k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }
    int s1 = 0, s2 = 0;
    sort(a.begin(),a.end());
    for(int i = 0; i < k; i ++) s1 += a[i];
    for(int i = k; i < n; i ++) s2 += a[i];
    cout << s2 - s1;
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