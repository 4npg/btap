#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define el '\n'
#define TASK "tenbai"


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    int n;
    int64 x;
    cin >> n >> x;
    vector<int64> a(n);
    for (int64 &val : a) cin >> val;
    for (int i = 0; i < n; ++i) {
        unordered_map<int64, int> used; 
        for (int j = i + 1; j < n; ++j) {
            int64 vl = x - a[i] - a[j];
            if (used.count(vl)) {
                int64 k = used[vl];
                if (k != i && k != j) {
                    cout << i + 1 << " " << k + 1 << " " << j + 1;
                    return 0;
                }
            }
            used[a[j]] = j;
        }
    }

    cout << "IMPOSSIBLE";
}
