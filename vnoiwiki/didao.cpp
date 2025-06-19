#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i, a, b) for (ll i = (a); i <= (b); ++i)
#define pb push_back
ll n, k;
ll a[100][100];
ll best = 1e18;
ll trace[100];
bool visited[100];
vector<ll> res;
ll sum = 0;

void Try(ll pos) {
    if (pos == k) {
        ll total = sum + a[trace[k - 1]][0];
        if (total < best) {
            best = total;
            res.clear();
            FOR(i, 0, k - 1) res.pb(trace[i]);
        }
        return;
    }

    FOR(i, 1, n - 1) {
        if (!visited[i]) {
            visited[i] = true;
            trace[pos] = i;
            sum += a[trace[pos - 1]][i];
            Try(pos + 1);
            sum -= a[trace[pos - 1]][i];
            visited[i] = false;
        }
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    cin >> n >> k;
    FOR(i, 0, n - 1) {
        FOR(j, 0, n - 1) {
            cin >> a[i][j];
        }
    }

    trace[0] = 0;
    visited[0] = true;
    Try(1);

    cout << best << "\n";
    for (ll x : res) cout << x + 1 << " ";
}
