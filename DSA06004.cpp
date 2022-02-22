#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    int x;
    map<int,int> a, b , c;
    for(int i =0; i < n ; i ++) {
        cin >> x;
        a[x] ++;
        b[x] ++;
    }
    for(int i =0; i < m ; i ++) {
        cin >> x;
        b[x] ++;
        c[x]++;
    }
    for(auto it : b) {
        cout << it.first << " ";
    }
    cout << endl;
    for(auto it : a) {
        if(c[it.first] > 0) cout << it.first << " ";
    }
    
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