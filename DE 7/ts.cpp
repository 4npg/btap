#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(a,b) for(ll i=(a);i<=(b);++i)


ll dq(ll n){
    if(n==0)return n;
    return n*dq(n-1);
}

ll fib(ll n){
    if(n==0||n==1)return n;
    return fib(n-1)+fib(n-2);
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }


}


