#include <bits/stdc++.h>
using namespace std;
#define ll long long

void to_binary(const vector<int>& pos, ll n) {
    string s(n, '0');
    for (int i : pos) s[i] = '1';
    cout << s << '\n';
}

void generate_combinations(ll n, ll k) {
    vector<int> pos(k);
    iota(pos.begin(), pos.end(), 0); // vị trí ban đầu: 0,1,...,k-1

    while (true) {
        to_binary(pos, n);

        ll i = k - 1;
        while (i >= 0 && pos[i] == n - k + i) i--;
        if (i < 0) break;

        pos[i]++;
        for (ll j = i + 1; j < k; ++j)
            pos[j] = pos[j - 1] + 1;
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    generate_combinations(n, k);
}
