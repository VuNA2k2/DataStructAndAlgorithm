#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<int> check;
vector<int> a;
vector< string > res;

void Output() {
    vector<int> tmp;
    tmp.push_back(-1e9);
    string s = "";
    for(int i = 0 ; i < n ; i ++) {
        if(check[i]){
            if(tmp.back() < a[i]) {
                tmp.push_back(a[i]);
                s += (to_string(a[i]) + " ");
            }
            else return;
        }
    }
    if(tmp.size() > 2) {
        res.push_back(s);
    }
}

void Try(int j) {
    for(int i = 0; i <= 1; i ++) {
        check[j] = i;
        if(j == n - 1) Output();
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n;
    a.resize(n,0);
    check.resize(n,0);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    Try(0);
    sort(res.begin(),res.end());
    for(auto it : res) {
        cout << it << endl;
    }
    res.clear();
}

int main()
{
    faster();
    solve();
}