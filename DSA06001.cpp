#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n ; i ++)cin >> a[i];
    sort(a.rbegin(),a.rend());
    for(int i = 0; i < n/2 ;i ++)
        cout << a[i] << " " << a[n - 1 - i] << " ";
    if(n % 2) cout << a[n/2];
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