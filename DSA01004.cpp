#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<int> a;
vector<vector<int> > res;

void Try(int j) {
    for(int i = a[j-1] + 1; i <= n - k + j; i ++) {
        a[j] = i;
        if(j == k) res.push_back(a);
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n >> k;
    a.resize(k+1,0);
    Try(1);
    for(int i = 0 ; i < res.size(); i ++) {
        for(int j = 1; j < res[i].size(); j ++) {
            cout << res[i][j];
        }
        cout << " ";
    }
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