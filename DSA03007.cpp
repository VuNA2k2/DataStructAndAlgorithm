#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    long long s = 0;
    for(int i = 0 ; i < n ; i ++) s += (a[i]*b[i]);
    cout << s;
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