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

bool cmp(pair<int64,int>x,pair<int64,int> y){
	return x.fi<y.fi;
}
void subtask2() {
    vector<int> L(n), R(n);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        L[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        R[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    vector<pair<int64, int>> V;
    for (int i = 0; i < n; ++i)
        V.emplace_back(a[i], R[i] - L[i] - 1);

    sort(all(V), cmp);
    for (int i = 1; i < n; ++i)
        V[i].second = max(V[i].second, V[i - 1].second);

    while (q--) {
        int64 k;
        cin >> k;
        auto it = upper_bound(all(V), make_pair(k, INT_MAX), cmp);
        cout << (it == V.begin() ? 0 : prev(it)->second);
        el;
    }
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin >> n >> q;
    FOR(i, 0, n-1) cin >> a[i];
    subtask2();
    
}
