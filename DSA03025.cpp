#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end(),cmp);

    int x = a[0].second;
    int d = 1;
    for(int i = 0; i < n; i ++) {
        if(a[i].first >= x) {
            d ++;
            x = a[i].second;
        }
    }
    cout << d;
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