#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
# define ll long long
# define endl "\n"
# define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
const ll maxn = 1e6;
ll dp[maxn];
int main(){
    fast;
    ll n;cin>>n;
    dp[1] = 1;
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= n; ++j) {
            if (j > 1) dp[j] = (dp[j] + dp[j-1]);
        }
    }
    cout<<dp[n];
}       