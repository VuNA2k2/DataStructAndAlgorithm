#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<string> res;
vector<vector<int> > a;
void Try(int i, int j, string s) {
    if(i == 0 && j == 0 && a[i][j] == 0)return;
    if(i == n - 1 && j == n - 1 && a[i][j]){
        res.push_back(s);
        return;
    }
    if(j < n - 1 && a[i][j + 1])Try(i,j+1,s + "R");
    if(i < n - 1 && a[i + 1][j])Try(i+1,j,s + "D");
    if(i < n - 1 && j < n - 1 && !a[i][j+1] && !a[i+1][j] || i >= n || j >= n)return;
}

void solve()
{
    cin >> n;
    a.resize(n,vector<int> (n,0));
    for(int i = 0 ; i < n ; i ++) {
        for(int j = 0 ; j < n ; j ++) cin >> a[i][j];
    }
    Try(0,0,"");
    if(!res.size()){
        cout << -1;
        return;
    }
    sort(res.begin(),res.end());
    for(auto it : res) cout << it << " ";
    res.clear();
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