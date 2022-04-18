#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;
vector<vector<long long>> a, b;


void Mul(vector<vector<long long>> x, vector<vector<long long>> y){
    vector<vector<long long>> tmp(2, vector<long long> (2,0));
    for(int i = 0; i < 2; i ++) {
        for(int j = 0; j < 2; j ++) {
            for(int k = 0; k < 2; k ++) {
                tmp[i][j] = (tmp[i][j] + (x[i][k] * y[k][j]) % MOD) % MOD;
            }
        }
    }
    a = tmp;
}

void Pow(long long n){
    if (n <= 1)
        return;
    Pow(n / 2);
    Mul(a, a);
    if (n % 2) Mul(a, b);
}


void solve()
{
    long long n;
    cin >> n;
    a.resize(2, vector<long long> (2));
    a[0][0] = a[0][1] = a[1][0] = 1;
    a[1][1] = 0;
    b = a;
    Pow(n - 1);
    cout << a[0][0];
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