#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int res;
vector<bool> doc, ngang, nguoc, xuoi;
int n;

void Try(int i) {
    for(int j = 1; j <= n ; j ++) {
        if(doc[i]&&ngang[j]&&nguoc[i-j+n]&&xuoi[i+j-1]) {
            doc[i]=ngang[j]=nguoc[i-j+n]=xuoi[i+j-1]= false;
            if(i == n) res ++;
            else Try(i + 1);
            doc[i]=ngang[j]=nguoc[i-j+n]=xuoi[i+j-1]= true;
        }
    }
}

void solve()
{
    cin >>n;
    res = 0;
    doc.resize(n+1,true);
    ngang.resize(n+1,true);
    nguoc.resize(n*2,true);
    xuoi.resize(n*2,true);
    Try(1);
    cout << res;
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