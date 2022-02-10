#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater_equal<long long> > q;
    for(int i = 0; i < n ; i ++) {
        long long x;
        cin >> x;
        q.push(x);
    }
    long long s = 0;
    while (q.size() > 1)
    {
        long long a = q.top();
        q.pop();
        long long b = q.top();
        q.pop();
        s += (a+b);
        q.push(a+b);
    }
    cout << s;
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