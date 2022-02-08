#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<int> check;
vector<vector<int> > res;
vector<int> a;

void Output() {
    int s = 0;
    vector<int> tmp;
    for(int i = 0 ; i < check.size(); i ++) {
        if(check[i]) {
            s += a[i];
            tmp.push_back(a[i]);
        }
    }
    if(s == k) {
        res.push_back(tmp);
    }
}

void Try(int j) {
    for(int i = 0 ; i <= 1; i ++) {
        check[j] = i;
        if(j == check.size() - 1) Output();
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n >> k;
    check.resize(n,0);
    a.resize(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }
    Try(0);
    for(int i = 0 ; i < res.size(); i ++) {
        for(int j = 0 ; j < res[i].size(); j ++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << res.size();
}

int main()
{
    faster();
    solve();
}