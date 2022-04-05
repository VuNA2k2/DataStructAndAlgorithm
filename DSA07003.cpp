#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for(int i = 0; i < s.size(); i ++) {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') st.push(s[i]);
        if(s[i] == ')') {
            if(st.top() == '(') {
                cout << "Yes";
                return;
            }
            while(!st.empty() && st.top() != '(') st.pop();
            st.pop();
        }
    }
    cout << "No";
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