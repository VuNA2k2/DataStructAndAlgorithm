#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    if(next_permutation(a.begin(),a.end())){
        for(int i = 0 ; i < n ; i ++) {
            cout << a[i] << " ";
        }
    }
    else {
        for(int i = 1 ; i <= n ; i ++) cout << i << " ";
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