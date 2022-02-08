#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void process(string s) {
    int ok = 0;
    for(int i = s.size() - 1; i >= 0 ; i --) {
        if(s[i] == '0') {
            s[i] = '1';
            for(int j = i + 1; j < s.size(); j ++) s[j] = '0';
            ok = 1;
            break;
        }
    }
    if(ok == 0) for(int i = 0 ; i < s.size(); i ++ ) cout << 0;
    else for(int i = 0 ; i < s.size(); i ++ ) cout << s[i];
}


void solve()
{
    string s;
    getline(cin,s);
    process(s);
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