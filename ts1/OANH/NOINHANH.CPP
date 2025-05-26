#include <bits/stdc++.h>
using namespace std;
#define ll long long

void readfile() {
    freopen("NOINHANH.INP", "r", stdin);
    freopen("NOINHANH.OUT", "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(false); // tăng tốc độ IO
    cin.tie(NULL); // bỏ đồng bộ hóa với C IO

    readfile();
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        ll x;cin>>x;
        sum+=x;
        cout << sum << " ";
    }

    return 0;
}