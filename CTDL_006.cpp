#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    map<int,int> mAp;
    int tmp;
    for(int i = 0 ;i < n ; i ++) {
        cin >> tmp;
        mAp[tmp] ++;
        if(mAp[tmp] == 1) cout << tmp << " ";
    }
}

int main()
{
    faster();
    solve();
}