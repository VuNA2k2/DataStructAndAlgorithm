#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> a(s1.size() + 1, vector<int> (s2.size() + 1, 0));
    for(int i = 0; i <= s1.size(); i ++) {
        for(int j = 0; j <= s2.size(); j ++) {
            if(i == 0) a[i][j] = j;
            else if(j == 0) a[i][j] = i;
            else if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1];
            else a[i][j] = 1 + min(min(a[i][j-1],a[i-1][j]), a[i-1][j-1]);
        }
    }
    cout << a[s1.size()][s2.size()];
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