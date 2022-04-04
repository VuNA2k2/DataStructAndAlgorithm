#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    vector<string> day = {"02", "20", "22"};
    vector<string> month = {"02"};
    vector<string> year = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};

    for(auto it1 : day)
        for(auto it2 : month) 
            for(auto it3 : year)
                cout << it1 << "/" << it2 << "/" << it3 << endl;
}

int main()
{
    faster();
    solve();
}