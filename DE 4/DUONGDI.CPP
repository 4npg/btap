#include <bits/stdc++.h>
<<<<<<< HEAD
using namespace std;
#define ll long long

ll tohop(ll n, ll k) {
    if (k > n - k) k = n - k; // tận dụng đối xứng
    ll res = 1;
    for (ll i = 1; i <= k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

void sub1(ll n) {
    cout << tohop(2 * n - 2, n - 1);
}
void READFILE(){
    freopen("DUONGDI.INP","r",stdin);
    freopen("DUONGDI.OUT","w",stdout);
}
int main() {
    ll n;READFILE();
    cin >> n;
    sub1(n);
    return 0;
=======
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;

#define ll long long
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ll MAX = 1e6 + 5;
const ll MOD = 1e9 + 7;

ll dp[MAX];
ll giaiThua[MAX], nghichDaoGT[MAX];
ll n;

void READFILE() {
    freopen("DUONGDI.INP", "r", stdin);
    freopen("DUONGDI.OUT", "w", stdout);
}

ll pow(ll a, ll b) {
    ll kq = 1;
    while (b) {
        if (b & 1) kq = kq * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return kq;
}

void xuli() {
    giaiThua[0] = nghichDaoGT[0] = 1;
    for (ll i = 1; i < MAX; ++i) {
        giaiThua[i] = giaiThua[i - 1] * i % MOD;
        nghichDaoGT[i] = pow(giaiThua[i], MOD - 2);
    }
}

ll toHop(ll a, ll b) {
    if (b < 0 || b > a) return 0;
    return giaiThua[a] * nghichDaoGT[b] % MOD * nghichDaoGT[a - b] % MOD;
}

void sub1() {
    // fill(dp, dp + n + 1, 0);
    dp[1] = 1;
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= n; ++j) {
            if (j > 1) dp[j] = (dp[j] + dp[j - 1]) % MOD;
        }
    }
    cout << dp[n];
}

void sub2() {
    cout << toHop(2 * n - 2, n - 1);
}

int main() {
    fast;
    cin >> n;
    xuli();

    if (n <= 10) sub1();
    else sub2();
>>>>>>> 631e376b7f41c47ebf7e787106da083845c5358f
}
