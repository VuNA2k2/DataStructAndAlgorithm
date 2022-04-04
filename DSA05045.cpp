#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool cmp(pair<pair<int, int>, double> a, pair<pair<int, int>, double> b) {
    return a.second > b.second;
}

void solve()
{
    int n;
    double w;
    cin >> n >> w;
    vector<pair<pair<int, int>, double>> p(n);
    for(int i = 0; i < n ; i ++) {
        cin >> p[i].first.second >> p[i].first.first;
        p[i].second = (double) p[i].first.second / p[i].first.first;
    }
    sort(p.begin(),p.end(), cmp);
    double res = 0;
    for(int i = 0; i < n; i ++) {
        if(w == 0) break;
        if(p[i].first.first <= w) {
            res += (double)p[i].first.second;
            w -= (double)p[i].first.first;
        }
        else {
            res += (double) p[i].first.second * w / p[i].first.first;
            w = 0;
        }
    }
    cout << fixed << setprecision(2) << res;
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