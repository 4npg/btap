#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define se second
#define fi first
int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n,k;cin>>n>>k;
    unordered_map<ll,ll> freq;
    ll ans = 0;
    FOR(i,0,n-1){
    	ll x;cin>>x;
    	freq[x]++;
    }
    for(auto &x:freq){
    	if(freq.count(x.fi+k))ans+= 1ll*x.se*freq[x.fi+k];
    }
    cout<<ans;
}


