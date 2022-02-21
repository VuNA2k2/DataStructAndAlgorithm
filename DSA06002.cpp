#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n , k;

void solve()
{
    cin >> n >> k;
    vector<int> a(n);
    vector<pair<int, int> > p(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        p[i].first = abs(a[i] - k);
        p[i].second = i;
    }
    sort(p.begin(),p.end());
    for(int i = 0 ; i < n ; i++)cout << a[p[i].second] << " ";
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