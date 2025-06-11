#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

int32_t main() {
    fast;
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int i = 0, j = 0;
    for (int k = 0; k < 2 * n; ++k) {
        if (k % 2 == 0) cout << a[i++] << " ";
        else cout << b[j++] << " ";
    }
}
