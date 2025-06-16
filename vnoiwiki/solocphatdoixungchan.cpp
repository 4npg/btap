#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define pb push_back
#define pob pop_back
#define all(a) (a).begin(),(a).end()
#define bit(mask,i) ((mask>>i)&1)
vector<string> ans;

void backtrack(string s,ll len,ll n){
	if(ans.size()>n)return;
	if(s.size()==len){
		string mirror = s;
		reverse(all(mirror));
		ans.pb(s+mirror);
		return;
	}
	for(auto c:{'6','8'}){
		backtrack(s+c,len,n);
	}
}


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll t;cin>>t;
    while(t--){
    	ll n;cin>>n;
    	ans.clear();
    	for(ll len=2;ans.size()<n;len+=2){
    		backtrack("",len/2,n);
    	}
    	FOR(i,0,n-1){
    		cout<<ans[i]<<" ";
    	}
    	nl;
    }

}


