#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<vector<int>> a;
vector<vector<bool>> check;
vector<string> res;

void Try(int i, int j, string s) {
    if(i == n && j == n) {
        res.push_back(s);
    }
    if(i != n && a[i+1][j] && check[i+1][j]){
        check[i+1][j] = 0;
        Try(i + 1, j, s + "D");
        check[i+1][j] = 1;
    }
    if(j != n && a[i][j+1] && check[i][j+1]) {
        check[i][j+1] = 0;
        Try(i, j + 1, s + "R");
        check[i][j+1] = 1;
    }
    if(i != 1 && a[i-1][j] && check[i-1][j]) {
        check[i-1][j] = 0;
        Try(i - 1, j, s + "U");
        check[i-1][j] = 1;
    }
    if(j != 1 && a[i][j-1] && check[i][j-1]) {
        check[i][j-1] = 0;
        Try(i, j - 1, s + "L");
        check[i][j-1] = 1;
    }
}

void solve()
{
    cin >> n;
    a.resize(n + 1,vector<int> (n+1, 0));
    check.resize(n + 1,vector<bool> (n+1, false));
    res.clear();
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n ; j++) {
            cin >> a[i][j];
            check[i][j] = true;
        }
    }
    if(!a[1][1] || !a[n][n]) {
        cout << -1;
        return;
    }
    check[1][1] = false;
    Try(1,1, "");
    if(!res.size()){
        cout << -1;
        return;
    }
    sort(res.begin(),res.end());
    for(auto it : res) cout << it << " ";
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