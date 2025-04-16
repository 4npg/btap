#include <bits/stdc++.h>
using namespace std;
# define ll  long long
# define pb push_back
# define endl "\n"
# define oo 1e18
# define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
const ll maxn = 1e7;
void READFILE(){
	freopen("CAU1.inp","r",stdin);
	freopen("CAU1.out","w",stdout);
}
ll a[maxn];
int main(){
	fast;READFILE;
	clock_t st,ed;

	st = clock();
	ll n;cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	// ll dp[n] = {1};
	// ll maxe = a[0];
	// for(ll i=1;i<n;i++){
	// 	maxe = max(maxe,a[i]);
	// 	dp[i] = dp[i-1] + (a[i]>=maxe?1:0);
	// 	if(a[i]<maxe){
	// 		dp[i]=1;
	// 		maxe = -oo;
	// 	}
	// 	// cout<<i<< " "<<maxe<<" "<<dp[i]<<"\n";
	// }
	// ll res = 0;
	// for(ll i=0;i<n;i++)res=max(res,dp[i]);
	// cout<<res;
	ll res = 1,len = 1 ;
	for(ll i=1;i<n;i++){
		if(a[i]<=a[i+1])len++;
		else len = 1;
		res = max(res,len);
	}
	cout<<res;
	ed = clock();
	double tt = (double)(ed-st)/(double)(CLOCKS_PER_SEC);
}