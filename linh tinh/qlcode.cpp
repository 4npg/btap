#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "POWEXP"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL

#ifdef LOCAL
  #define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
  #define dbg(x) do {} while(0)
#endif


ll mulmod(ll a, ll b, ll mod) {
    ll res = 0;
    a %= mod;
    b %= mod;
    while (b > 0) {
        if (b & 1) {
            res = (res + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

ll ipow(ll base, ll exp, ll mod) {
    ll res = 1 % mod;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = mulmod(res, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return res;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll a, b, m;
    cin >> a >> b >> m;
    ll A = ipow(a, b, m);
    ll B = ipow(b, a, m);
    cout << mulmod(A, B, m) << "\n";

}


