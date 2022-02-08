#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
vector<int> a;
vector<string> res;
void Output() {
    string tmp = "";
    for(int i = 0 ; i < a.size(); i ++ ) {
        if(a[i]) tmp += "B";
        else tmp += "A";
    }
    res.push_back(tmp);
}

void Try(int j) {
    for(int i = 0 ; i <= 1; i ++) {
        a[j] = i;
        if(j == a.size() - 1) Output();
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n;
    a.resize(n,0);
    Try(0);
    for(int i = 0 ; i < res.size(); i ++) {
        cout << res[i] << " ";
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