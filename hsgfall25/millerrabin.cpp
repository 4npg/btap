// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "millerrabin"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)

int64 t;

int64 mul(int64 a,int64 b,int64 mod){
    int64 res = 0;
    while(b){
        if(b&1)res = (res+a)%mod;
        a = (a+a)%mod;
        b>>=1;
    }
    return res;
}

int64 ipow(int64 a, int64 b, int64 n){
    a = a % n;
    int64 ans = 1;
    while (b){
        if (b & 1)ans = mul(ans,a,n);
        a = mul(a,a,n);
        b>>=1;
    }
    return ans;
}

bool check(int64 a,int64 s, int64 n){
    int64 x = ipow(a,s,n);
    if(x==1||x==n-1)return 1;
    while(s<n-1){
        x = mul(x,x,n);
        if(x==n-1)return 1;
        s*=2;
    }
    return 0;
}

bool millerrabin(int64 n){
    if (n < 2)return 0;
    vector<int> arr = {2,3,5,7,11,13,17,19,23};

    int64 s = n - 1;
    while (s % 2 == 0)s /= 2;

    for (auto a : arr){
        if(n==a)return 1;
        if (!check(a,s,n))return 0;
    }
    return 1;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    int64 n;cin>>n;
    cout<<(millerrabin(n)?"YES":"NO");
}


