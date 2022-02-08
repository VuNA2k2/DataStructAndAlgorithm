#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0 ; i < k ; i ++) {
        cin >> a[i];
    }
    int ok = 0;
    for(int i = a.size() - 1 ; i >= 0 ; i --) {
        if(a[i] != n - k + i + 1) {
            ok = 1;
            a[i] ++;
            for(int j = i + 1; j < a.size(); j ++) {
                a[j] = a[j - 1] + 1;
            }
            break;
        }
    }
    if(ok) for(int i = 0; i < a.size(); i ++)cout << a[i] << " ";
    else for(int i = 1 ; i <= k ; i ++ ) cout << i << " ";
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