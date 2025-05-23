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

ll ipow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1)            // nếu bit thấp nhất của exp là 1
            result = result * base;
        base = base * base;     // bình phương cơ số
        exp >>= 1;              // dịch exp sang phải 1 bit
    }
    return result;
}
bool tangorgiam(const string &s){
    bool inc = true, dec = true;
    for(int i = 1; i < (int)s.size(); ++i){
        if(s[i] <= s[i-1]) inc = false;
        if(s[i] >= s[i-1]) dec = false;
    }
    return inc || dec;
}
bool nto(ll n){
    if(n<2)return false;
    if(n==2||n==3)return true;
    if(n%2==0||n%3==0)return false;
    for(ll i=5;i*i<=n;i+=6)if(n%i==0||n%(i+2)==0)return false;
    return true;
}
ll cnt(ll st,ll ed){
    ll cn=0;
    FOR(i,st,ed){
        string str = to_string(i);
        cn+=((tangorgiam(str)&&nto(i))?1:0);
    }
    return cn;
}
int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll n;cin>>n;
    ll limit = ipow(10,n)-1,st = ipow(10,n)/10;
    cout<<cnt(st,limit);
}


