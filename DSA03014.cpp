#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long check[(int)1e6+5];
long long n;
string s;

void Sang() {
    for(int i = 1; i <= 1e6; i ++) {
        check[i] = (long long) i * i * i;
    }
}

bool cmp(long long x) {
    string tmp = to_string(x);
    int id = 0;
    for(int i = 0; i < s.size(); i ++) {
        if(tmp[id] == s[i]) id ++;
        if(id == tmp.size()) return true;
    }
    return false;
}


void solve()
{
    cin >> n;
    s = to_string(n);
    for(int i = cbrt(n); i > 0; i --) {
        if(check[i] == n) {
            cout << n;
            return;
        }
        if(cmp(check[i])) {
            cout << check[i];
            return;
        }
    }
    cout << -1;
}

int main()
{
    faster();
    Sang();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}