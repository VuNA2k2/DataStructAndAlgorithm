#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<long long> a;


void UGLY() {
    priority_queue<long long, vector<long long>, greater<long long>> q;
    q.push(1);
    map<long long, bool> check;
    for(int i = 2; i <= 10000; i ++) {
        long long tmp = q.top(); q.pop();
        if(check[tmp]) continue;
        a.push_back(tmp);
        check[tmp] = true;
        q.push(tmp*2);
        q.push(tmp*3);
        q.push(tmp*5);
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << a[n-1];
}

int main()
{
    faster();
    UGLY();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}