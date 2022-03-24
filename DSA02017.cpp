#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<vector<int>> a;
vector<bool> ngang, doc, nguoc, xuoi;
int res = 0;

void Try(int i, int s) {
    if(i == n + 1) {
        res = max(res,s);
        return;
    }
    for(int j = 1; j <= n; j ++) {
        if(doc[j] && nguoc[i+j-1] && xuoi[n-i+j]) {
            doc[j] = nguoc[i+j-1] = xuoi[n-i+j] = false;
            Try(i+1, s + a[i][j]);
            doc[j] = nguoc[i+j-1] = xuoi[n-i+j] = true;
        }
    }
}

void solve()
{
    res = 0;
    n = 8;
    a.resize(n+1, vector<int> (n+1));
    ngang.resize(n+1,true);
    doc.resize(n+1,true);
    nguoc.resize(2*n,true);
    xuoi.resize(2*n,true);
    for(int i = 1; i <= n ; i ++) {
        for(int j = 1; j <= n ; j ++) cin >> a[i][j];
    }
    Try(1,0);
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