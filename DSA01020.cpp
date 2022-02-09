#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void process(string s) {
    for(int i = s.size() - 1; i >= 0; i --) {
        if(s[i] == '1') {
            s[i] = '0';
            for(int j = i + 1 ; j < s.size(); j ++) {
                s[j] = '1';
            }
            cout << s;
            return;
        }
    }
    for(int i = 0; i < s.size(); i ++) {
        cout << 1;
    }
}

void solve()
{
    string s;
    cin.ignore();
    cin >> s;
    process(s);
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