#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define bit(mask,i) ((mask>>i)&1)
#define pb push_back
#define pob pop_back
#define all(a) (a).begin(),(a).end()
ll n,k;
vector<ll> cur_subset;

void print_subset(){
    for(auto x:cur_subset){
        cout<<x<<" ";
    }
    nl;
}

void sinhquaylui(ll pos){
    ll lastnum = cur_subset.empty()?0:cur_subset.back();
    FOR(i,lastnum+1,n){
        cur_subset.pb(i);
        if(cur_subset.size()==k){
            // sort(all(cur_subset));
            // do{
                print_subset();
            // }while(next_permutation(all(cur_subset)));

        }
        else sinhquaylui(pos+1);
        cur_subset.pob();
    }
}

void bitmask(ll n){
    vector<ll> s(n);
    FOR(i,0,n-1)s[i]=i+1;
    ll mask = (1<<n)-1;
    vector<ll> perm;
    FOR(i,0,n-1){
       if(bit(mask,i))perm.pb(s[i]); 
    }
    sort(all(perm));
    do{
        for(auto x:perm)cout<<x;
        cout<<' ';
    }while(next_permutation(all(perm)));
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;
    // cur_subset.clear();
    // sinhquaylui(1);
    bitmask(n);
}


