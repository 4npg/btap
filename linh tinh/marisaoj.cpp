// authur : anphung iu bcu
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    string s;
    getline(cin, s);

    for (auto &c : s) {
        c = tolower(c);
    }

    cout << s;
}
