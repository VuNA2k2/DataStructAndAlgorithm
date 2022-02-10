#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[10] = {1,2,5,10,20,50,100,200,500,1000};

int process(int n) {
    int res = 0;
    for(int i = 9; i >= 0; i --) {
        if(n >= a[i]) {
            res += (n/a[i]);
            n %= a[i];
        }
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    cout << process(n);
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