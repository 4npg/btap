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

#define maxn 2009
#define lg 20
#define inf (long long)4e18
#define mod (long long)(1e9+7)

int n;
long long a[maxn];
int dp[maxn], tr[maxn];

con_meo_dua_leo(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen(file".inp", "r", stdin);
    // freopen(file".out", "w", stdout);

    cin>>n;
    f0(i, 1, n){
        cin>>a[i];
    }

    int ans = 0, lpos = 0;
    dp[0] = 1;

    f0(i, 1, n){
        dp[i] = 1;
        tr[i] = -1;
        f0(j, 1, n){
            if(a[j] < a[i]){
                if(dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                    tr[i] = j;
                }
            }
        }
        if(ans < dp[i]){
            ans = dp[i];
            lpos = i;
        }
    }

    cout<<ans<<'\n';
    vector<long long> res;

    for(int i=lpos; i!=-1; i=tr[i]){
        res.emplace_back(a[i]);
    }

    reverse(res.begin(), res.end());
    for(auto &x:res)cout<<x<<" ";

    cerr<<"\ntime elapsed: "<<TIME <<"s.\n";
}
