#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n+m-1,0);
    for(int i = 0; i < n ; i ++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i ++) {
        cin >> b[i];
    }
    for(int i = 0; i < n ; i ++) {
        for(int j = 0; j < m; j ++) {
            c[i+j] += a[i] * b[j];
        }
    }
    for(int i = 0; i < n + m - 1; i ++) {
        cout << c[i] << " ";
    }
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