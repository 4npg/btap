// author: anphung iu bcu
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout << "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    string s;
    getline(cin, s);
    int k; cin >> k;
    string ans ="";
    for (auto &c : s) {
        if (c != ' ') {
            char rotated;
            if (islower(c)) rotated = 'a' + (c - 'a' + k) % 26;
            else if (isupper(c)) rotated = 'A' + (c - 'A' + k) % 26;
            else rotated = c;
            cout<<rotated;
        }else
        cout<<c;
    }
    // 
    // el;
    // cout << s;
    // 
}
