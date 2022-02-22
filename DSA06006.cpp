#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(3,0);
    int x;
    for(int i = 0; i < n; i ++) {
        cin >> x;
        a[x] ++;
    }
    for(int i = 0; i < a.size(); i ++) {
        for(int j = 0; j < a[i]; j ++) {
            cout << i << " ";
        }
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