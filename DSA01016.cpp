#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<int> a;

void Output() {
    cout << "(";
    for(int i = 0; i < a.size() - 1; i ++) {
        cout << a[i] << " ";
    }
    cout << a[a.size()-1] << ") ";
}

void Try(int k, int s) {
    for(int j = k; j >= 1; j -- ) {
        if(s + j <= n) {
            a.push_back(j);
            s += j;
            if(s == n) Output();
            else Try(j,s);
            s -= j;
            a.pop_back();
        }
    }
}

void solve()
{
    cin >> n;
    a.clear();
    Try(n,0);
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