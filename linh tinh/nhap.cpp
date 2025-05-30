#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "taoxau"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL

#ifdef LOCAL
  #define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
  #define dbg(x) do {} while(0)
#endif


void qhd(ll n, ll m, const string &s) {
    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 0));
    dp[0][0] = 1;
    vector<ll> last(256, 0);
    for (ll i = 1; i <= n; ++i) {
        unsigned char c = s[i-1];
        for (ll k = 0; k <= i; ++k) {
            dp[i][k] = dp[i-1][k];
            if (k > 0) {
                dp[i][k] += dp[i-1][k-1];
                ll p = last[c];
                if (p > 0) dp[i][k] -= dp[p-1][k-1];
                dbg(dp[i][k]);
            }
        }
        last[c] = i;
    }
    ll res = 0;
    for (ll k = m; k <= n; ++k) res += dp[n][k];
    cout<<res;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n,m;cin>>n>>m;
    string s;cin>>s;
    qhd(n,m,s);

}


