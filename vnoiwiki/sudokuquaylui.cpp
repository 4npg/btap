#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i, a, b) for (ll i = (a); i <= (b); ++i)

bool isInCol[9][10], isInRow[9][10], isInBox[3][3][10];
ll board[9][9];

bool solve(ll r = 0, ll c = 0) {
    if (r == 9) return true;
    if (c == 9) return solve(r + 1, 0);
    if (board[r][c] != 0) return solve(r, c + 1);

    FOR(num, 1, 9) {
        if (!isInRow[r][num] && !isInCol[c][num] && !isInBox[r / 3][c / 3][num]) {
            board[r][c] = num;
            isInRow[r][num] = isInCol[c][num] = isInBox[r / 3][c / 3][num] = true;

            if (solve(r, c + 1)) return true;

            board[r][c] = 0;
            isInRow[r][num] = isInCol[c][num] = isInBox[r / 3][c / 3][num] = false;
        }
    }
    return false;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    FOR(i, 0, 8) {
        FOR(j, 0, 8) {
            cin >> board[i][j];
            ll num = board[i][j];
            if (num) {
                isInRow[i][num] = true;
                isInCol[j][num] = true;
                isInBox[i / 3][j / 3][num] = true;
            }
        }
    }
    if (solve()) {
        FOR(i, 0, 8) {
            FOR(j, 0, 8) cout << board[i][j] << ' ';
            cout << '\n';
        }
    }
}
