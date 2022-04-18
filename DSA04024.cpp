#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;

vector<vector<long long>> Mul(vector<vector<long long>> a, vector<vector<long long>> b) {
    vector<vector<long long>> tmp(a.size(), vector<long long> (a.size(), 0));
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a.size(); j ++) {
            for(int k = 0; k < a.size(); k ++) {
                tmp[i][j] = (tmp[i][j] + (a[i][k] * b[k][j]) % MOD) % MOD;
            }
        }
    }
    return tmp;
}

vector<vector<long long>> Pow(vector<vector<long long>> a, long long k) {
    if(k == 1) return a;
    if(k % 2 == 0) return Pow(Mul(a,a), k/2);
    else return Mul(a, Pow(Mul(a,a), k /2));
}

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<vector<long long>> a(n, vector<long long> (n));
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            cin >> a[i][j];
        }
    }
    vector<vector<long long>> res = Pow(a, k);
    long long s = 0;
    for(int i = 0; i < n; i ++) {
        s = (s+ res[i][n-1]) % MOD; 
    }
    cout << s;
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