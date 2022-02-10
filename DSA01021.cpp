#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<int> a;
int res;
bool stop = false;
vector<int> f;
void process() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i --;
    if(i == 0) stop = true;
    else {
        a[i] ++;
        for(int j = i + 1; j <= k ; j ++) {
            a[j] = a[j-1] + 1;
        }
    }
}

void solve()
{
    res = 0;
    stop = false;
    cin >> n >> k;
    a.resize(k+1);
    f.resize(n+1,0);
    for(int i = 1 ; i <= k ; i ++) {
        cin >> a[i];
        f[a[i]]++;
    }
    process();
    if(stop) cout << k;
    else {
        for(int i = 1; i <= k ; i ++) {
            if(!f[a[i]])res ++;
        }
        cout << res;
    }
    a.clear();
    f.clear();
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