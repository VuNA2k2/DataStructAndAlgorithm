#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> _map;
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
        _map[a[i]] ++;
    }
    int x;
    cin >> x;
    _map[x] = 0;
    for(int i = 0 ; i < n ; i ++) {
        if(_map[a[i]]!=0) cout << a[i] << " ";
    }
}

int main()
{
    faster();
    solve();
}