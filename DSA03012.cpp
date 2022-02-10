#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    getline(cin,s);
    vector<int> f(26,0);
    for(auto it : s) f[it - 'a'] ++;
    int Max = 0;
    for(auto it : f) Max = max(Max,it);
    if(Max <= s.size()/2 + s.size() % 2)cout << 1;
    else cout << -1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
        cout << endl;
    }
}