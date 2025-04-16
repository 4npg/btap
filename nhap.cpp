#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)

vector<ll> g[5000];
bool vis[5000];

void dfs(ll u){
    cout<<u<<" ";
    vis[u] = true;

    for(ll v:g[u]){
        if(!vis[v])dfs(v);
    }
}

int main(){
    fast;
    ll n,m;cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1);
}