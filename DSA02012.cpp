#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n,vector<int> (m,1));
    for(int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            int tmp;
            cin >> tmp;
        }
    }
    for(int i = 1 ; i < n ; i ++) {
        for (int j = 1 ; j < m ; j ++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout << a[n-1][m-1];
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