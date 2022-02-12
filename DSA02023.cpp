#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, k;
vector<string> s;
vector<int> a;
vector<string> res;

void Output() {
    string tmp = "";
    for(int i = 1; i <= k ; i ++) {
        tmp += (s[a[i]-1] + " ");
    }
    res.push_back(tmp);
}

void Try(int j) {
    for(int i = a[j-1] + 1; i <= s.size() - k + j; i ++) {
        a[j] = i;
        if(j == a.size() - 1) Output();
        else Try(j + 1);
    }
}

void solve()
{
    cin >> n >> k;
    a.resize(k + 1, 0);
    s.resize(n);
    map<string,int> m;
    for(int i = 0 ; i < n ; i++) {
        cin.ignore();
        cin >> s[i];
        m[s[i]] ++;
    }
    vector<string> tmp;
    for(int i = 0; i < n ; i ++) {
        if(m[s[i]]) {
            tmp.push_back(s[i]);
            m[s[i]] = 0;
        }
    }
    s.clear();
    s = tmp;
    tmp.clear();
    sort(s.begin(),s.end());
    Try(1);
    for(auto it : res) {
        cout << it << endl;
    }

}

int main()
{
    faster();
    solve();
}