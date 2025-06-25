#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define bit(n, i) ((n >> i) & 1)
#define all(a) a.begin(), a.end()
#define rep(i, x, n) for (int i = x; i <= n; ++i)
#define red(i, x, n) for (int i = x; i >= n; --i)
#define inp(a) freopen(a".inp", "r", stdin), freopen(a".out", "w", stdout)

template<class A, class B> inline void maximize(A &x, B y) {x = max(x, y);};
template<class A, class B> inline void minimize(A &x, B y) {x = min(x, y);};

const int N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;

// main program

ll modpow(ll a, ll exp, ll m){
    ll res = 1;
    a %= m;

    while (exp){
        if (exp & 1) res = (res * a) % m;
        a = (a * a) % m;

        exp >>= 1;
    }

    return res;
}

ll legendre(ll n, ll p){
    ll cnt = 0;
    while (n) cnt += n / p, n /= p;

    return cnt;
}

const int LIM = 1e5;

vector<ll> prime = {2};

void sieve(){
    ll m_p[LIM + 1]{0};

    for (ll x = 3; x <= LIM; x += 2){
        if (m_p[x] == 0) prime.pb(m_p[x] = x);

        for (ll i = 0; x * prime[i] <= LIM; ++i){
            m_p[x * prime[i]] = prime[i];

            if (prime[i] == m_p[x]) break;
        }
    }
}
signed main(){
    cin.tie(0) -> sync_with_stdio(0);

    sieve();

    int q; cin >>q;

    while (q--){
        ll n, k, m; cin >>n >>k >>m;

        ll res = 1;

        for (ll p: prime){
            ll exp = legendre(n, p) - legendre(k, p) - legendre(n - k, p);

            if (exp > 0) res = (res * modpow(p, exp, m)) % m;
        }

        cout <<res <<'\n';
    }



    return 0;
}
