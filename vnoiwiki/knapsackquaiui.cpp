#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
int n;
ll s;
ll w[100],v[100];
ll maxvalue = -1;
void Try(int i,ll cur_weight,ll cur_value){
    if(i==n){
        maxvalue = max(maxvalue,cur_value);
        return;
    }

    Try(i+1,cur_weight,cur_value);
    if(cur_weight+w[i]<=s){
        Try(i+1,cur_weight+w[i],cur_value+v[i]);
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n>>s;
    FOR(i,0,n-1){
        cin>>w[i]>>v[i];
    }
    Try(0,0,0);
    cout<<maxvalue;
}


