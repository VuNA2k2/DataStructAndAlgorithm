#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    bool check = false;
    int n , m , k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m), c(k);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    for(int i = 0 ; i < m ; i ++) cin >> b[i];
    for(int i = 0 ; i < k ; i ++) cin >> c[i];
    int x = 0, y = 0, z = 0;
    while(x < n && y < m && z < k) {
        if(a[x] < b[y] || a[x] < c[z])x ++;
        else if(b[y] < a[x] || b[y] < c[z]) y ++;
        else if(c[z] < a[x] || c[z] < b[y]) z ++;
        else if(a[x] == b[y] && b[y]  == c[z]) {
            cout << a[x] << " ";
            check = true;
            x ++; y ++; z ++;
        }
    }
    if(!check) cout << "NO";
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