#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
const int maxN = 10010;
#define pb push_back
int n, m;
vector<int> g[maxN];
int id[maxN], low[maxN], cnt;
int cau = 0;

void dfs(int u, int par) {
    id[u] = low[u] =cnt++;
    for (int v : g[u]) {
        if (v == par) continue;
        if (!id[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] == id[v]) cau++;
        } else {
            low[u] = min(low[u], id[v]);
        }
    }
}

int main() {
    fast;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    for (int i = 1; i <= n; i++)
        if (!id[i]) dfs(i, i);

    cout<< cau;
}
