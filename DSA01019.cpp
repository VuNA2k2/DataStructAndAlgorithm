#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector< vector<int> > res;
vector<int> a;

void Output() {
    if(!a[0]||a[a.size() -1 ])return;
    for(int i = 0 ; i < a.size() - 1 ; i ++) {
        // 1 = A 0 = H
        if(a[i]&&a[i+1])return;
    }
    res.push_back(a);
}

void Try(int j) {
    for(int i = 0 ; i <= 1 ; i ++) {
        a[j] = i;
        if(j == a.size() - 1) Output();
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n;
    a.resize(n);
    Try(0);
    for(int i = 0 ; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j ++){
            if(res[i][j]) cout << "H";
            else cout << "A";
        }
        cout << endl;
    }
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