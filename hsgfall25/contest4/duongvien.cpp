// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define f0(i,a,b) for(int (i)=(a);i<=(b);++i)

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    int N, M;
    cin >> N >> M;
    vector<vector<int>> a(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    int maxSide = 0;
    for (int side = min(N, M); side >= 1; side--) {
        bool found = false;
        for (int i = 0; i + side <= N && !found; i++) {
            for (int j = 0; j + side <= M && !found; j++) {
                bool valid = true;

                for (int col = j; col < j + side; col++) 
                    if (a[i][col] == 0) { valid = false; break; }
                if (!valid) continue;

                for (int col = j; col < j + side; col++) 
                    if (a[i + side - 1][col] == 0) { valid = false; break; }
                if (!valid) continue;

                for (int row = i; row < i + side; row++) 
                    if (a[row][j] == 0) { valid = false; break; }
                if (!valid) continue;
                for (int row = i; row < i + side; row++) 
                    if (a[row][j + side - 1] == 0) { valid = false; break; }
                if (!valid) continue;

                maxSide = side;
                found = true;
            }
        }
        if (found) break;
    }

    cout << maxSide * maxSide;
}
