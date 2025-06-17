#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define all(a) (a).begin(),(a).end()
#define bit(mask,i) ((mask>>i)&1)
#define pb push_back
#define pob pop_back

ll n,s,a[20],sum;
vector<ll> curmo,bestset;

void print(){
	for(auto x:curmo)cout<<a[x]<<" ";
	nl;
}

void ql(){
	ll lastindex = curmo.empty()?0:curmo.back();
	FOR(i,lastindex,n-1){
		curmo.pb(i);
		sum += a[i];
		if (sum == s) {
		    if (bestset.empty() || curmo.size() < bestset.size()) {
		        bestset = curmo;
		    }
		} else if (sum < s && (bestset.empty() || curmo.size() < bestset.size())) {
		    ql();
		}
		curmo.pob();
		sum-=a[i];
	}
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n>>s;
    FOR(i,0,n-1)cin>>a[i];
    curmo.clear();
    sum = 0;
    bestset.clear();
	ql();
	for(auto i:bestset){
		cout<<a[i]<<" ";
	}
}


