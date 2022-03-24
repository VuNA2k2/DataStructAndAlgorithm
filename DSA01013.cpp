#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string s;
    cin >> s;
    string tmp;
    tmp.push_back(s[0]);
    for(int i = 1; i < s.size(); i ++) {
        if(s[i] != tmp.back())tmp.push_back('1');
        else tmp.push_back('0');
    }
    cout << tmp;
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