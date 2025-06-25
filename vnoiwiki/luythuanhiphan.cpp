#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, a, b) for(int i = (a); i <=(b); i++)
#define int64 long long
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
const int N = 1000006;
char a[N], b[N];
int MOD;

bool isPrime(int x) {
    REP(i, 2, sqrt(x))
        if (x % i == 0) return 0;
   return 1; 
}

int Phi(int n){
    int ans = n;
    REP(i,2,sqrt(n)){
        if(n%i==0)ans-=ans/i;
        while(n%i==0)n/=i;
    }
    if(n>1)ans-=ans/n;
    return ans;
}

int bigMod(char *s, int mod) {
    int64 ans = 0, n = strlen(s);
    FOR(i, 0, n) ans = (ans * 10 + s[i] - '0') % mod;
    return ans;
}

int POW(int a, int p) {
    if (p == 1) return a;
    int64 x = POW(a, p >> 1);
    x = x * x % MOD;
    if (p & 1) x = x * a % MOD;
    return x;
}

int main() {
    fast;
    cin >> a; cin >> b; cin >> MOD;
    int phi = Phi(MOD);
    int aa = bigMod(a, MOD);
    int bb = bigMod(b, phi);
    cout << POW(aa, bb);
}
