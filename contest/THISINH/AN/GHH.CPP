#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)

ll sum(ll n){
	ll t=0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			t+=i;
			if(n/i!=i)t+=n/i;
		}
	}
	return t;
}
void READFILE(){
    freopen("GHH.INP","r",stdin);
    freopen("GHH.OUT","w",stdout);
}
int main(){
	fast;READFILE();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<(bool)(sum(n)>=2*n)<<endl;
	}
}