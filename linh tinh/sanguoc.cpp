#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL
int32_t main() {
    fast;

    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> vals;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
        if (freq[x] == 2) vals.push_back(x); 
    }

    sort(vals.rbegin(), vals.rend()); 

    ll hv = 0, hcn1 = 0, hcn2 = 0;
    for (ll x : vals) {
        if (freq[x] >= 4 && hv == 0) hv = 1LL * x * x;
        if (freq[x] >= 2) {
            if (hcn1 == 0) hcn1 = x;
            else if (hcn2 == 0) {
                hcn2 = x;
                break;
            }
        }
    }

    ll hcn = hcn1 * hcn2;
    cout << max(hv, hcn) << '\n';

}


