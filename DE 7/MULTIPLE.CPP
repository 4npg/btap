// cap so nhan, nghich dao modulo, luy thua nhi phan, euclid mo rong
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "MULTIPLE"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ll mod = 2023;

ll ipow(ll a, ll b) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll x, y;
void egcd(ll a, ll b) {
    if (b == 0) { x = 1; y = 0; return; }
    egcd(b, a % b);
    ll temp = x;
    x = y;
    y = temp - a / b * y;
}
ll inv(ll a, ll m) {
    egcd(a, m);
    return (x % m + m) % m;
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    ll n, r;
    cin >> n >> r;

    if (r == 1) {
        cout << n % mod << endl;
    } else {
        cout << (1-ipow(r,n)+mod)%mod * inv((1-r+mod)%mod,mod) % mod;
    }
}
