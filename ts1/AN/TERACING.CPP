// quy tac nhan, chat nhi phan, dem tan suat

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "TERACING"
#define nl "\n"
#define pb push_back
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)

const ll maxn = 1e6+5;
ll a[maxn];

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n, k; cin >> n >> k;
    FOR(i, 0, n-1) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<pair<ll, ll>> freq;
    ll tmp = a[0], cnt = 1;
    FOR(i, 1, n-1) {
        if (a[i] == tmp) {
            cnt++;
        } else {
            freq.push_back({tmp, cnt});
            tmp = a[i];
            cnt = 1;
        }
    }
    freq.pb(make_pair(tmp, cnt));

    // for(auto x:freq){
    // 	cout<<x.fi<<" "<<x.se<<nl;
    // }
    // cout<<nl;

    ll res = 0;
    ll m = freq.size();
    FOR(i, 0, m-1) {
        ll x = freq[i].fi + k;
        auto it = lower_bound(freq.begin() + i + 1, freq.end(), make_pair(x, 0LL));
		if (it != freq.end() && it->fi == x) {
    		res += freq[i].se * it->se;
    		// cout<<"cap loai "<<i+1<<nl;
    		// cout<<"phan tu a = "<<freq[i].fi<<", tan saut a = "<<freq[i].se<<nl;
    		// cout<<"phan tu b = "<<it->fi<<", tan suat b = "<<it->se<<nl;
    		// cout<<"so cap tao duoc = "<<freq[i].se*it->se<<", so cap hien thoi = "<<res<<nl<<nl;
		}

    }
    cout << res;
}