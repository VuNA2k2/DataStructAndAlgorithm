#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> a;
vector<bool> check;
vector<vector<int> > res;
int n;

void Output() {
    res.push_back(a);
}

void Try(int j) {
    for(int i = 1; i <= n; i ++) {
        if(check[i-1]) {
            a[j] = i;
            check[i-1] = false;
            if(j == n - 1) Output();
            else Try(j + 1);
            check[i-1] = true;
        }
    }
}

void solve()
{
    cin >> n;
    a.resize(n);
    check.resize(n,true);
    res.clear();
    vector<int> tmp(n);
    for(int i = 0; i < n ; i  ++)cin >> tmp[i];
    Try(0);
    for(int i = 0; i < res.size(); i ++) {
        if(res[i] == tmp) {
            cout << i + 1;
            return;
        }
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