#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int d = 0;
    for(int i = 0; i < n ; i ++)cin >> a[i];
    for(int i = 0; i < n ; i ++) {
        int id = i;
        for(int j = i + 1; j < n; j ++) {
            if(a[j] < a[id])
                id = j;
        }
        if(id != i) {
            swap(a[i],a[id]);
            d++;
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