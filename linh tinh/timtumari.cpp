// author : anphung iu bcu
#include <bits/stdc++.h>
using namespace std;
#define TASK "tenbai"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)

char c[200][200];

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    int n, m;
    cin >> n >> m;
    string yc;
    FOR(i, 0, n - 1)
        FOR(j, 0, m - 1)
            cin >> c[i][j];
    cin >> yc;

    bool found = false;
    string rev_yc = yc;
    reverse(rev_yc.begin(), rev_yc.end());

    vector<string> col_str(m, "");

    FOR(i, 0, n - 1) {
        string row_str = "";
        FOR(j, 0, m - 1) {
            row_str += c[i][j];
            col_str[j] += c[i][j];
        }

        if (row_str.find(yc) != string::npos || row_str.find(rev_yc) != string::npos)
            found = true;
    }

    FOR(j, 0, m - 1) {
        if (col_str[j].find(yc) != string::npos || col_str[j].find(rev_yc) != string::npos)
            found = true;
    }

    cout << (found ? "YES" : "NO");
}
