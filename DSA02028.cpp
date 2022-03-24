#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> a;
vector<int> val;
int n, k, res = 0, s;

void Try(int vt, int d) {
    if(vt == n) {
        if(d == k) res ++;
        return;
    }
    for(int i = vt + 1; i <= n; i ++) {
        if(val[i] - val[vt] == s) Try(i, d+1);
    }
}

void solve()
{
    cin >> n >> k;
    val.resize(n+1,0);
    for(int i = 1; i <= n; i ++) {
        cin >> val[i];
        val[i] += val[i-1];
    }
    s = val[n] / k;
    Try(0,0);
    cout << res;
}

int main()
{
    faster();
    solve();
}