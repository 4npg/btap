#include <bits/stdc++.h>
const int N = 10005;
const int oo = 123456789;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
vector<int> a[N];
int par[N], low[N], num[N], nchild[N];
bool cut[N];
int m, n, Time, bridge, art;

void DFS(int u) {
    num[u] = ++Time;
    low[u] = n+1;
    int i, v;
    for(i=0; i<a[u].size(); i++) {
        v = a[u][i];
        if (v == par[u]) continue;
        if (par[v] == 0) {
            nchild[u]++;
            par[v] = u;
            DFS(v);
            low[u] = min(low[u], low[v]);
        }
        else
            low[u] = min(low[u], num[v]);
    }
}

int main(){
	fast;
    cin>>n>>m;
    int i, u, v;
    for(i=1; i<=m; i++) {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(i=1; i<=n; i++)
    if (par[i] == 0) {
        par[i] = -1;
        DFS(i);
    }
    //bridges
    for(v=1; v<=n; v++) {
        u = par[v];
        if (u != -1 && low[v] >= num[v]) bridge++;
    }
    for(v=1; v<=n; v++)
    if (par[v] != -1) {
        u = par[v];
        if (low[v] >= num[u])
            cut[u] = cut[u] || (par[u] != -1) || (nchild[u] >= 2);
    }
    for(i=1; i<=n; i++)
        if (cut[i]) art++;
    cout<<art<<" "<<bridge;
}
