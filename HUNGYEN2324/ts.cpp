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

const ll maxn = 1e7*1ll;
ll a[maxn];
int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n; ll k;
	cin >> n; cin >> k;
	for (ll i = 0; i <n; i++)cin >> a[i];
	

	ll d = 0;
	for (ll i = 0; i <n; i++) {
		ll sum = a[i];
		for (ll j = i+1; j <n; i++) {
			sum+=a[j];
			if (sum%k==0) d++;
		}
	}
	cout << d;

}


