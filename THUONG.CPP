#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define ll long long

void READFILE(){
    freopen("THUONG.INP","r",stdin);
    freopen("THUONG.OUT","w",stdout);
}

int main(){
    fast;
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    unordered_map<ll, ll> d;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (ll i = 0; i < m; i++) {
        ll x;
        cin >> x;
        d[x] = 0;
    }
    ll res = LLONG_MIN;
    for (auto x : a) {
        if (d[x] > 0) {
            cout << x << " ";
            res = max(res, x * d[x]);
        }
    }
    cout << "\n" << res;
}
