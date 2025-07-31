#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)

int n, k, target;
int a[20], assign[20], group_sum[10];
bool found = false;

void Try(int pos) {
    if (found) return;
    if (pos == n) {
        for (int i = 0; i < k; ++i)
            if (group_sum[i] != target) return;

        for (int i = 0; i < n; ++i)
            cout << assign[i] + 1 << ' ';
        cout << '\n';
        found = true;
        return;
    }

    for (int g = 0; g < k; ++g) {
        if (group_sum[g] + a[pos] <= target) {
            assign[pos] = g;
            group_sum[g] += a[pos];
            Try(pos + 1);
            group_sum[g] -= a[pos];
        }
    }
}

int main() {
    fast;
    cin >> n >> k;
    int sum = 0;
    FOR(i, 0, n - 1) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % k != 0) {
        cout << "ze";
        return 0;
    }
    target = sum / k;
    Try(0);
    if (!found) cout << "ze";
}