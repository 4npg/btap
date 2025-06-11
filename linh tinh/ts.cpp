#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)


ll phi(ll n){
    ll ans = n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ans-=ans/i;
            while(n%i==0)n/=i;
        }
    }
    if(n>1)ans-=ans/n;
    return ans;
}

ll x,y,cnt;
void egcd(ll a,ll b){
    if(b==0){
        x = 1;
        y = 0;
        return;
    }
    egcd(b,a%b);
    cnt++;
    ll temp = x;
    x = y;
    y = temp - a/b * y;
    cout<<a<<" "<<x<<" + "<<b<<" "<<y<<" "<<a*x+b*y<<nl;
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n;cin>>n;
    cout<<phi(n);
    cout<<nl;
    egcd(240,46);
}


