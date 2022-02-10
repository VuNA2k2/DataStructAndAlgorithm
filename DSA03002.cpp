#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> IntToVector(int n) {
    vector<int> tmp;
    while(n) {
        tmp.push_back(n%10);
        n/=10;
    }
    return tmp;
}

int VectorToInt(vector<int> a) {
    int tmp = 0;
    for(int i = a.size() - 1 ; i >= 0; i --) {
        tmp = tmp*10 + a[i];
    }
    return tmp;
}


void Min(vector<int> a, vector<int> b) {
    for(int i = 0 ; i < a.size(); i ++) {
        if(a[i] == 6)a[i] = 5;
    }
    for(int i = 0 ; i < b.size(); i ++) {
        if(b[i] == 6)b[i] = 5;
    }
    int A = VectorToInt(a);
    int B = VectorToInt(b);
    cout << A + B;
}

void Max(vector<int> a, vector<int> b) {
    for(int i = 0 ; i < a.size(); i ++) {
        if(a[i] == 5)a[i] = 6;
    }
    for(int i = 0 ; i < b.size(); i ++) {
        if(b[i] == 5)b[i] = 6;
    }
    int A = VectorToInt(a);
    int B = VectorToInt(b);
    cout << A + B;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> vA = IntToVector(a);
    vector<int> vB = IntToVector(b);
    Min(vA,vB);
    cout << " ";
    Max(vA,vB);
}

int main()
{
    faster();
    solve();
}