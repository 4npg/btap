#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)


int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    string str;
    cin>>str;
    ll cnt=0;
    ll res=0;
    for(auto x:str){
    	if(x=='C'){
    		cnt++;
    		res += cnt;
    	}else{
    		if(x=='N'){
    			cnt=0;
    		}
    	}
    }
    cout<<res;
}


