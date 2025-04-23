#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll tohop(ll n, ll k) {
    if (k > n - k) k = n - k; // tận dụng đối xứng
    ll res = 1;
    for (ll i = 1; i <= k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

void sub1(ll n) {
    cout << tohop(2 * n - 2, n - 1);
}
void READFILE(){
    freopen("DUONGDI.INP","r",stdin);
    freopen("DUONGDI.OUT","w",stdout);
}
int main() {
    ll n;READFILE();
    cin >> n;
    sub1(n);
    return 0;
}
