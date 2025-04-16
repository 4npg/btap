#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
const int maxN = 10010;

int n, m;
vector<int> g[maxN];
int num[maxN], low[maxN], timer;
int bridge = 0;

void dfs(int u, int pre) {
    num[u] = low[u] = ++timer;
    for (int v : g[u]) {
        if (v == pre) continue;
        if (!num[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] == num[v]) bridge++;
        } else {
            low[u] = min(low[u], num[v]);
        }
    }
}
void READFILE(){
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
}
int main() {
    fast;READFILE();
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        if (!num[i]) dfs(i, i);

    cout<< bridge;
}
