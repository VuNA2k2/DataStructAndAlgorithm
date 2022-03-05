#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<vector<int>> res;
vector<int> a;

void Output() {
    vector<int> tmp;
    if(a[0] != 1 || a[a.size()-1] != 0) return;
    int d1 = 0, d2 = 0;
    for(int i = 0; i < a.size()-3; i ++) {
        if(a[i] + a[i+1] == 2) return;
        if(a[i] + a[i+1] + a[i+2] + a[i+3] == 0) return;
        if(a[i])tmp.push_back(8);
        else tmp.push_back(6);
    }
    for(int i = a.size() - 3; i < a.size()-1; i ++) {
        if(a[i] + a[i+1] == 2) return;
        if(a[i])tmp.push_back(8);
        else tmp.push_back(6);
    }
    if(a[a.size()-1])tmp.push_back(8);
    else tmp.push_back(6);
    res.push_back(tmp);
}


void Try(int j) {
    for(int i = 0; i <= 1; i ++) {
        a[j] = i;
        if(j == n-1) Output();
        else Try(j+1);
    }
}

void solve()
{
    cin >> n;
    a.resize(n);
    res.clear();
    Try(0);
    sort(res.begin(),res.end());
    for(auto it : res) {
        for(auto i : it) cout << i;
        cout << endl;
    }
}

int main()
{
    faster();
    solve();
}