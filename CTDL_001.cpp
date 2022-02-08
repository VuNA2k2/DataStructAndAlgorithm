#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector< vector<int> > res;
vector<int> a;
int n;

void Show() {
    if(n % 2 == 0) {
        for (int i = 0 ; i < res.size(); i ++) {
            for(int j = 0; j < res[i].size(); j ++) {
                cout << res[i][j] << " ";
            }
            for(int j = res[i].size() - 1; j >= 0; j --) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        for(int i = 0 ; i < res.size(); i ++ ) {
            for(int j = 0; j < res[i].size(); j ++) {
                cout << res[i][j] << " ";
            }
            cout << 0 << " ";
            for(int j = res[i].size() - 1; j >= 0; j --) {
                cout << res[i][j] << " ";
            }
            cout << endl;
            for(int j = 0; j < res[i].size(); j ++) {
                cout << res[i][j] << " ";
            }
            cout << 1 << " ";
            for(int j = res[i].size() - 1; j >= 0; j --) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void Try(int i) {
    for(int j = 0 ; j <= 1; j ++) {
        a[i] = j;
        if(i == a.size() - 1) res.push_back(a);
        else Try(i + 1);
    }
}

void solve()
{
    cin >> n;
    a.resize(n/2);
    Try(0);
    Show();
}

int main()
{
    faster();
    solve();
}