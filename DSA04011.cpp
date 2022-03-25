#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long BinaryToNum(string s) {
    long long x = 1;
    long long sum = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        sum += x * (s[i] - '0');
        x*=2;
    }
    return sum;
}

void solve()
{
    cin.ignore();
    string a, b;
    cin >> a >> b;
    cout << BinaryToNum(a)*BinaryToNum(b);
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