#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Pow(int n) {
    if(n == 0) return 1;
    int s = Pow(n/2);
    if(n % 2 == 0) return s * s;
    else return s * s * 2;
}

void solve()
{
    int n , k;
    cin >> n >> k;
    int mid = Pow(n)/2;
    while(n) {
        if(n == 1){
            cout << "A";
            break;
        }
        if(k == mid) {
            cout << (char) ('A' + n - 1);
            break;
        }
        if(k > mid) {
            k = mid*2 - k;
        }
        n --;
        mid/=2;
    }
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