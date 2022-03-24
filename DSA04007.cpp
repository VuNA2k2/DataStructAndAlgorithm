#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int k;
    string a, b;
    cin >> k >> a >> b;
    if(a.size() < b.size()) {
        string tmp = a;
        a = b;
        b = tmp;
    }
    while(a.size() != b.size()) b = "0" + b;
    string s = "";
    int x = 0;
    for(int i = a.size() - 1; i >= 0; i --){
        s = to_string((a[i] - '0' + b[i] - '0' + x) % k) + s;
        x = (a[i] - '0' + b[i] - '0' + x) / k;
    }
    if(x != 0) s = to_string(x) + s;
    for(int i = 0; i < s.size(); i ++) cout << s[i];
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