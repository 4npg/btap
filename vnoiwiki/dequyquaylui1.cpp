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
ll n;
string cur_string;

void quaylui(ll pos){
	if(pos>n){
		cout<<cur_string;
		nl;
		return;
	}
	for(char i='0';i<='1';i++){
		cur_string.pb(i);
		quaylui(pos+1);
		cur_string.pob();
	}
}

void bitmask(ll n){
	ll total = (1<<n);
    FOR(mask,0,total-1){
    	for(ll i=n-1;~i;i--){
    		cout<<bit(mask,i);
    	}
    	nl;
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;
    //quay lui
    cur_string = "";
    quaylui(1);
}


