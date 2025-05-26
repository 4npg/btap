#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(0); cin.tie(0)

void readfile() {
    freopen("THUONG.INP", "r", stdin);
    freopen("THUONG.OUT", "w", stdout);
}

int main() {
    fast;

    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    unordered_map<ll, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll max_reward = 0;
    for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        if (freq.count(x)) {
            max_reward = max(max_reward, 50LL * x);
            freq.erase(x);
        }
    }

    for (ll x : a) {
        if (freq.count(x)) {
            cout << x << " ";
        }
    }
    cout << '\n';
    cout << max_reward << '\n';

    return 0;
}