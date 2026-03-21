// author : anphung
#include<bits/stdc++.h>
using namespace std;
#define con_meo_dua_leo int32_t main
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define f0(i,a,b) for(int i = (a); i <= (b);++i)
#define fd(i,a,b) for(int i = (a); i >= (b);--i)
#define file ""

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// int Rand(int l, int r){
//     return l+rng()%(r-l+1);
// }

#define maxn 200005
#define lg 20
#define inf (long long)4e18
#define mod (long long)(1e9+7)
#define DATA pair<long long, int>

int n, m;
vector<pair<int, long long>> a[maxn];
long long d[maxn];

void dijkstra(){
    priority_queue<DATA, vector<DATA>, greater<DATA>> pq;
    pq.emplace(0, 1);
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    
    while(pq.size()){
        auto du = pq.top().first; auto u = pq.top().second;
        pq.pop();

        if(du > d[u])continue;

        for(auto ele : a[u]){
            int v = ele.first;
            long long w = ele.second;

            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                pq.emplace(d[v], v);
            }
        }
    }
}

con_meo_dua_leo(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen(file".inp", "r", stdin);
    // freopen(file".out", "w", stdout);

    cin>>n>>m;
    f0(i, 0, m-1){
        int u, v; cin>>u>>v;
        long long w; cin>>w;
        a[u].emplace_back(v, w);
    }

    dijkstra();

    f0(u, 1, n){
        cout<<d[u]<<" ";
    }

    cerr<<"\ntime elapsed: "<<TIME <<"s.\n";
}
