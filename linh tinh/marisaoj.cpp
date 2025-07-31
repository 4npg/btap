// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
#define bit(mask,i) ((mask>>i)&1)
#define pb push_back
#define pob pop_back

int n,k;
vector<int> cur_subset;

// backtrack style

void print(){
    for(auto x:cur_subset)cout<<x<<" ";
    el;
}

void Try(int pos){
    int lastindex = ((cur_subset.empty()?0:cur_subset.back()));
    FOR(i,lastindex+1,n){
        cur_subset.pb(i);
        if(cur_subset.size()==k)print();
        else Try(pos+1);
        cur_subset.pob();
    }
}

// bitwise style

void bitwiseop(){
    vector<int> s(n);
    FOR(i,0,n-1)s[i] = i+1;
    FOR(mask,0,(1<<n)-1){
        if(__builtin_popcount(mask)==k){
            vector<int> subset;
            FOR(i,0,n-1){
                if(bit(mask,i))subset.pb(s[i]);
            }
            for(auto x:subset)cout<<x<<" ";
            el;
        }
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n>>k;
    // cur_subset.clear();
    // Try(1);
    bitwiseop();
}


