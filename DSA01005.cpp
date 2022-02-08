#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<bool> check;
vector<int> a;
vector< vector<int> > res;

void Try(int j) {
    for(int i = 1; i <= n; i ++) {
        if(check[i]) {
            a[j] = i;
            check[i] = false;
            if(j == n - 1) res.push_back(a);
            else Try(j + 1);
            check[i] = true;
        }
    }
}

void solve()
{
    cin >> n;
    check.resize(n+1,true);
    a.resize(n);
    Try(0);
    for(int i = 0 ; i < res.size(); i ++) {
        for(int j = 0 ; j < res[i].size(); j ++) {
            cout << res[i][j];
        }
        cout << " ";
    }
    check.clear();
    res.clear();
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