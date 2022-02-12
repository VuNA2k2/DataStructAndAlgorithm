#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());
    int l = 0, r = n - 1;
    for(int i = 0 ; i < n ; i ++) {
        if(!(a[i] == b[i] || a[i] == b[n - 1 - i])) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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