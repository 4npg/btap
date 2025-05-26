#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL
const ll mod = 1e9+7;
const ll inv2 = (mod + 1) / 2;
const ll inv3 = (mod + 1) / 3;
inline ll sq(ll x) { return (x % mod) * (x % mod) % mod; }

#ifdef LOCAL
#define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
#define dbg(x) do {} while(0)
#endif

ll xlb(ll n) {
    ll m = floor(sqrt(n));
    ll m1 = (m - 1) % mod;

    ll s1 = m1 * (m % mod) % mod * inv2 % mod;
    ll s2 = m1 * (m % mod) % mod * ((2 * m - 1) % mod) % mod * inv3 % mod;
    ll cnt = (m % mod) * ((n % mod - sq(m) + 1 + mod) % mod) % mod;

    return (s1 + s2 + cnt) % mod;
}

int32_t main() {
    fast;
    clock_t st,ed;
    st = clock();
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n, a, b;
    cin >> n >> a >> b;
    ll suma = ((a % mod) * ((n % mod) * ((n + 1) % mod) % mod) % mod * inv2) % mod;
    ll sumb = (b % mod) * xlb(n) % mod;
    cout << (suma + sumb) % mod;
    ed = clock();

    double tt = (double)(ed-st)/(double)CLOCKS_PER_SEC;
    cout<<nl<<(double)tt;
}
