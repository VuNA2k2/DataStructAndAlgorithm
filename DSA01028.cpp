#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<int> a;
vector<int> id;
void Output() {
    for(int i = 1; i <= k; i ++) cout << a[id[i]-1] << " ";
    cout << endl;
}

void Try(int j) {
    for(int i = id[j-1] + 1; i <= n - k + j; i ++) {
        id[j] = i;
        if(j == k) Output();
        else Try(j + 1);
    }
} 

void solve()
{
    cin >> n >> k;
    a.resize(n);
    id.resize(k+1,0);
    for(int i = 0; i < n; i ++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 0; i < a.size() - 1; i ++) 
        while(a[i] == a[i+1]) {
            a.erase(i + a.begin());
        }
    n = a.size();
    Try(1);
}

int main()
{
    faster();
    solve();
}