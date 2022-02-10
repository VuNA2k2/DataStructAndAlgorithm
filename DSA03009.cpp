#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int> > a(n);
    for(int i = 0 ; i < n ; i ++) {
        int x;
        cin >> x >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    vector<bool> check(1e3+5,true);
    pair<int,int> s;
    s.first = 0;
    s.second = 0;
    for(int i = 0; i < a.size() ; i ++) {
        while(!check[a[i].first] && a[i].first > 0) a[i].first --;
        if(check[a[i].first] && a[i].first > 0) {
            s.first ++;
            s.second += a[i].second;
            check[a[i].first] = false;
        }
    }
    cout << s.first << " " << s.second;
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