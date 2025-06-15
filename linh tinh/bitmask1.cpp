#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(a,b) for(ll i=(a);i<=(b);++i)
#define bit(mask,i) ((mask>>i)&1)

ll a[20],s,ans,n;


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;
    FOR(0,n-1)cin>>a[i];
    FOR(0,(1>>n)-1){
        ll sum =0;
        for(ll j=0;j<n;j++)if(bit(i,j))sum+=a[j];
            ans+=(s==sum);
    }
}


