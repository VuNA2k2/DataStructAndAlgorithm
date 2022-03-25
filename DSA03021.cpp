#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    int res = 0;
    cin >> n;
    vector<int> a(n);
    int Min = 5000;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        Min = min(Min,a[i]);
    }
    for(int i = Min; i > 0; i --) {
        for(int j = 0; j < n; j ++) {
            int x = a[j] / i;
            if(a[j] / x == i) {
                while(x && a[j] / x == i) x --;
                res += (x + 1);
            }
            else{
                res = 0;
                break;
            } 
        }
        if(res) {
            cout << res;
            return;
        }
    }
}

int main()
{
    faster();
    solve();
}