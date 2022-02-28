#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<int> a;
vector<int> tmp;
vector<vector<int> > res;

void Output() {
    res.push_back(a);
}

void Try(int j) {
    for(int i = a[j-1] + 1; i <= n - k + j; i ++) {
        a[j] = i;
        if(j == k) Output();
        else Try(j + 1);
    }
}


void solve()
{
    cin >> n >> k;
    a.resize(k+1, 0);
    tmp.resize(k+1,0);
    res.clear();
    for(int i = 1; i <= k; i ++) {
        cin >> tmp[i];
    }
    Try(1);
    for(int i = 0; i < res.size(); i ++) {
        if(res[i] == tmp) {
            cout << i + 1;
            return;
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