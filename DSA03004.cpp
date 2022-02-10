#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    sort(a.begin(),a.end());
    while(a[0] == 0)a.erase(a.begin());
    long long x = 0;
    long long y = 0;
    for(int i = 0; i < a.size(); i += 2) {
        x = x*10 + a[i];
    }
    for(int i = 1; i < a.size(); i += 2) {
        y = y*10 + a[i];
    }
    cout << x + y;
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