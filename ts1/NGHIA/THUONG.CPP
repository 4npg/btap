#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	freopen("THUONG.INP","r",stdin);
    freopen("THUONG.OUT","w",stdout);
	ll n,m;cin>>n>>m;
	vector<ll>sobdt(n);
	vector<ll>lanquay(m);
	for(ll i=0;i<n;i++)cin>>sobdt[i];
	for(ll i=0;i<m;i++)cin>>lanquay[i];
	unordered_set<ll> remove_set(lanquay.begin(), lanquay.end());
sobdt.erase(remove_if(sobdt.begin(), sobdt.end(),
                      [&](ll x){ return remove_set.count(x); }),
            sobdt.end());
	for(auto x:sobdt)cout<<x<<" ";
	map<ll,ll>sum;
	sort(sobdt.begin(),sobdt.end());
	for(ll i=0;i<sobdt.size();i++){
        sum[sobdt[i]]+=sobdt[i];
	}
	ll ln=0;
	for(auto x:sum){
        if(x.second>ln){
            ln=x.second;
        }
	}
	cout<<'\n';
	cout<<ln;
}