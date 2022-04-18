#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string s;
    cin >> s;
    vector<vector<int>> a(s.size(), vector<int> (s.size(),0));
    for(int i = 0; i < s.size() ; i ++)  a[i][i] = 1;
    for(int i = s.size() - 2; i >= 0; i --) {
        for(int j = i + 1; j < s.size(); j ++) {
            if(s[i] == s[j]) a[i][j] = a[i+1][j-1] + 2;
            else a[i][j] = max(a[i+1][j], a[i][j-1]);
        }
    }
    cout << s.size() - a[0][s.size() - 1];
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