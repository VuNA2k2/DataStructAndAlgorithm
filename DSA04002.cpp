#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long MOD = 1e9 + 7;

long long Pow(long long n, long long k) {
    if(k==0) return 1;
	long long s = Pow(n,k/2);
	if(k%2==0) return s%MOD * s%MOD % MOD;
	return (n*(s%MOD*s%MOD)%MOD)%MOD;
}

long long Reserve(long long n){
    long long tmp = 0;
    while(n) {
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}

void solve()
{
    long long n;
    cin >> n;
    cout << Pow(n, Reserve(n));
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