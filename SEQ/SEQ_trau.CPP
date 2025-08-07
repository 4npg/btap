// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "SEQ"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int i=(a); i<=(b); ++i)
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
int n, q;
const int maxn = 1e6+5;
int64 a[maxn];

int64 solve(int64 k) {
    int len = 0, best = 0;
    FOR(i, 0, n-1) {
        if (a[i] > k) len = 0;
        else {
            len++;
            best = max(best, len);
        }
    }
    return best;
}

void subtask1() {
    while (q--) {
        int64 k;
        cin >> k;
        cout << solve(k);
        el;
    }
}
int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".ans", "w", stdout);
    }
    cin >> n >> q;
    FOR(i, 0, n-1) cin >> a[i];
    subtask1();
    
}