#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL

#ifdef LOCAL
  #define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
  #define dbg(x) do {} while(0)
#endif

const int maxn = 2005;
ll a[maxn][maxn];

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    ll n; cin >> n;
    FOR(i, 0, n - 1)
        FOR(j, 0, n - 1)
            cin >> a[i][j];

    ll res = LLONG_MIN;
    for (ll d = -n + 1; d <= n - 1; ++d) {
        ll sum = 0;
        for (ll i = 0; i < n; ++i) {
            ll j = i - d;
            if (j >= 0 && j < n) sum += a[i][j];
        }
        res = max(res, sum);
    }

    for (ll d = 0; d <= 2 * n - 2; ++d) {
        ll sum = 0;
        for (ll i = 0; i < n; ++i) {
            ll j = d - i;
            if (j >= 0 && j < n) sum += a[i][j];
        }
        res = max(res, sum);
    }

    cout << res;
}
