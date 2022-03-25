#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int s , d;
    cin >> s >> d;
    if(s > d * 9) {
        cout << -1;
        return;
    }
    vector<int> a;
    while(s) {
        if(s > 9) {
            a.push_back(9);
            s -= 9;
        }
        else{
            a.push_back(s);
            s = 0;
        } 
    }
    while(a.size() != d) a.push_back(0);
    sort(a.begin(),a.end());
    if(!a[0]) {
        for(int i = 0; i < a.size(); i ++) {
            if(a[i]) {
                a[i] --;
                a[0] ++;
                break;
            }
        }
    }
    for(auto it : a) cout << it;
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