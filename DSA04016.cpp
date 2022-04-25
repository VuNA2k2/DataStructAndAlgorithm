#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int m, n, k;
    cin >> m >> n >> k;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i = 0; i < n + m; i ++) {
        int x;
        cin >> x;
        q.push(x);
    }
    for(int i = 1; i < k; i ++) q.pop();
    cout << q.top();
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