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


bool prime(ll n){
    if(n<2)return false;
    if(n==2||n==3)return true;
    if(n%2==0||n%3==0)return false;
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0)return false;
    }
    return true;
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cout<<((prime(2023)?"PRIME":"NOT PRIME"));

}


