#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl "\n"
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)

ll d,x[20],y[20],cnt;
void egcd(ll a,ll b){
    if(b==0){
        x[0]=1;
        y[0]=0;
        return;
    }
    egcd(b,a%b);
    cnt++;
    x[cnt] = y[cnt-1];
    y[cnt] = x[cnt-1] - a/b * y[cnt-1];
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n,k;cin>>n>>k;
    unordered_map<ll,ll> freq;
    FOR(i,0,n-1){
        ll x;cin>>x;
        freq[x]++;
    }
    ll res=0;
    for(auto x:freq){
        if(freq.count(x.fi+k)){
            res+=1ll*x.se*freq[x.fi+k];
            cout<<"x = "<<x.fi<<", tan suat x = "<<x.se<<nl;
            cout<<"x+k = "<<x.fi+k<<", tan suat x+k = "<<freq[x.fi+k];
            cout<<nl<<nl;
        }
    }
    cout<<res;
}


