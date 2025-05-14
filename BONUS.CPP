#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
const ll maxn = 1e7;
#define endl "\n"
ll a[maxn];
#define oo 1e18
ll slidin(const ll ab[],ll k,ll n){
	ll maxe = -oo;
	ll mine = oo;
	ll curans = 0;
	for(ll i=0;i<k;i++){
		maxe = max(maxe,ab[i]);
		mine = min(mine,ab[i]);
	}
	curans = maxe-mine;
	maxe = -oo;
	mine = oo;
	for(ll i=k-1;i<n-k-1;i++){

	}
}
int main(){
	fast;
	ll n;cin>>n;
	for(ll i=0;i<n;i++)cin>>a[i];
	ll sum=0;
	for(ll i=0;i<n;i++){
		sum+= slidin(a,i);
	}

}