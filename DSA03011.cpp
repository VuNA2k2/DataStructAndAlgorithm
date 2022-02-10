#include<bits/stdc++.h> 
 
using namespace std;
 
#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    priority_queue<long long, vector<long long> , greater_equal<int> > q;
    for(int i = 0 ; i < n ; i ++)
    {
        long long x;
        cin >> x;
        q.push(x % MOD);
    }
    long long sum=0;
    while(q.size()>1)
    {
        long long a = q.top();
        q.pop();
        long long b = q.top();
        q.pop();
        q.push((a+b) % MOD);
        sum+=((a+b)% MOD);
    }
    cout << sum % MOD;
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