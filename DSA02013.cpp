#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> a;
vector<bool> check(405,true);
int n, p , s;
void Eratos() {
    for(int i = 2; i <= 400; i ++) {
        if(check[i]){
            a.push_back(i);
            for(int j = i*2; j <= 400; j += i) {
                check[j] = false;
            }
        }
            
    }
}
vector<vector<int>> res;
vector<int> tmp;
void Try(int j, int sum) {
    for(int i = j; i < a.size(); i ++) {
        if(sum > s) return;
        if(sum == s) {
            if(tmp.size() == n) res.push_back(tmp);
            return;
        }
        tmp.push_back(a[i]);
        Try(i + 1, sum + a[i]);
        tmp.pop_back();
    }
}

void solve()
{
    cin >> n >> p >> s;
    res.clear();
    tmp.clear();
    for(int i = 0; i < a.size(); i ++) {
        if(a[i] > p) {
            Try(i,0);
            break;
        }
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i ++) {
        for(int j = 0; j < res[i].size(); j ++) cout << res[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    Eratos();
    while(t--)
    {
        solve();
        cout << endl;
    }
}