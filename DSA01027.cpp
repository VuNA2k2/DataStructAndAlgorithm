#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<bool> check;
vector<int> tmp;
vector<int> a;

void Output() {
    for(auto it : a) {
        cout << tmp[it] << " ";
    }
    cout << endl;
}

void Try(int j) {
    for(int i = 0; i < n ; i ++) {
        if(check[i]) {
            a[j] = i;
            check[i] = false;
            if(j == n - 1) Output();
            else Try(j + 1);
            check[i] = true;
        }
    }
}

void solve()
{
    cin >> n;
    a.resize(n);
    check.resize(n,true);
    tmp.resize(n);
    for(int i = 0; i < n; i ++) cin >> tmp[i];
    sort(tmp.begin(),tmp.end());
    Try(0);
}

int main()
{
    faster();
    solve();
}