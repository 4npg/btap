// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define f0(i,a,b) for(int (i)=(a);i<=(b);++i)


int64 a,b,mod;
int64 ipow(int64 a,int64 b,int64 mod){
	int64 ans = 1;
	while(b){
		if(b&1)ans=(ans*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return ans;
}

int64 sum_pow(int64 a, int64 b, int64 mod) {
    if (b == 0) return 1 % mod;
    if (b & 1) {
        return (sum_pow(a, b - 1, mod) + ipow(a, b, mod)) % mod;
    }
    int64 k = b / 2;
    int64 first = sum_pow(a, k - 1, mod);
    int64 second = sum_pow(a, k, mod);
    int64 ak = ipow(a, k, mod);
    return (first + (ak * second) % mod) % mod;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>a>>b>>mod;
    cout<<sum_pow(a,b,mod);

}


