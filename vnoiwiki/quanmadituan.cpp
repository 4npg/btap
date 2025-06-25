#include <bits/stdc++.h>
using namespace std;
#define TASK "tenbai"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i, a, b) for (int (i) = (a); i <= (b); ++i)

int dx[8] = {2,1,-1,-2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

bool isafe(int x, int y, vector<vector<int>> &board, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == -1);
}

void print(const vector<vector<int>> &board, int n, int m) {
    FOR(x, 0, n - 1) {
        FOR(y, 0, m - 1) {
            cout <<board[x][y] << " ";
        }
        nl;
    }
}

bool Try(int x, int y, int movei, vector<vector<int>> &board, int n, int m) {
    if (movei > n * m) return true;

    FOR(k, 0, 7) {
        int next_x = x + dx[k];
        int next_y = y + dy[k];
        if (isafe(next_x, next_y, board, n, m)) {
            board[next_x][next_y] = movei;
            if (Try(next_x, next_y, movei + 1, board, n, m)) return true;
            board[next_x][next_y] = -1; 
        }
    }
    return false;
}

int solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> board(n, vector<int>(m, -1));

    board[0][0] = 1;

    if (!Try(0, 0, 2, board, n, m)) {
        cout << "NO";
        return 0;
    } else {
        print(board, n, m);
    }
    return 1;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    solve();
}
