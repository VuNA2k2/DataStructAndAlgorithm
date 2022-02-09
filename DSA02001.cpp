#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int> (n,0));
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[0][i];
    }
    for(int i = 1 ; i < n ; i ++) {
        for(int j = 0; j < n - i; j ++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        }
    }
    for(int i = 0 ; i < n ; i ++) {
        cout << "[";
        for(int j = 0; j < n - i; j ++) {
            if(j == n - i - 1) cout << a[i][j] << "]";
            else cout << a[i][j] << " ";
        }
        cout << endl;
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