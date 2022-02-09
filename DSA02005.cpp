#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<string> res;
vector<int> a;
vector<bool> check;
string s;

void Output() {
    string tmp = "";
    for(int i = 0 ; i < a.size(); i ++) {
        tmp += s[a[i]];
    }
    res.push_back(tmp);
}

void Try(int j) {
    for(int i = 0 ; i < a.size(); i ++) {
        if(check[i]) {
            a[j] = i;
            check[i] = false;
            if(j == a.size() - 1) Output();
            else Try(j + 1);
            check[i] = true;
        }
    }
}

void solve()
{
    getline(cin,s);
    check.resize(s.size(),true);
    a.resize(s.size());
    Try(0);
    for(auto it : res) cout << it << " ";
    res.clear();
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
        cout << endl;
    }
}