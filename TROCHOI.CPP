#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define oo 1e18
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
const ll maxn = 1e7;
ll n;
ll a[maxn];
ll b[maxn];
void trau(){
	ll maxn = oo;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			maxn = min(maxn, abs(a[i]+b[j]));
			cout<<"a["<<i<<"] = "<<a[i]<<"; b["<<j<<"] = "<<b[j]<<"; "<<abs(a[i]+b[j])<<" "<<a[i]+b[j]<<endl;
		}
	}
	cout<<maxn;
}
bool cmp(ll a,ll b){
	return a<b;
}
void shot(){
	sort(a,a+n);
	sort(b,b+n,cmp);
	cout<<abs(a[0]+b[n-1]);
}
void ac(){
	sort(a,a+n);
	sort(b,b+n);
	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(ll i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	ll res = oo;
	ll i =0,j=n-1;
	while(i<n&&j>=0){
		res = min(res,abs(a[i]+b[j]));
		cout<<"a["<<i<<"] = "<<a[i]<<"; b["<<j<<"] = "<<b[j]<<"; "<<abs(a[i]+b[j])<<" "<<a[i]+b[j]<<endl;
		if(a[i]+b[j]<0)i++;
		else j--;
	}
	cout<<res;
}
void READFILE(){
	freopen("TROCHOI.inp","r",stdin);
	freopen("TROCHOI.out","w",stdout);
}
int main(){
	fast;READFILE();
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	// trau();
	// shot();
	ac();
}