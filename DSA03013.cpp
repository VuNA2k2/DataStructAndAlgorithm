#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    vector<int> f(26,0);
    for(auto it : s) f[tolower(it) - 'a'] ++;
    int Max = 0;
    for(auto it : f) Max = max(Max,it);
    if(Max <= s.size()/n && s.size() % n == 0)cout << 1;
    else if(Max <= s.size()/n + 1 && s.size() % n != 0) cout << 1;
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