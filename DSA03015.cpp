#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    if(m > n) {
        cout << -1;
        return;
    }
    if(n == m) {
        if(s < 7){
            cout << s;
            return;
        }
        else {
            cout << -1;
            return;
        }
    }
    int x = s*m;
    if(x%n) x = x / n + 1;
    else x = x / n;
    int check = x + x/7;
    if(check <= s) cout << x;
    else cout << -1;
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