#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// const int maxn = 1e6;
// int a[maxn];
ll n;
void READFILE(){
	freopen("NOINHANH.INP","r",stdin);
	freopen("NOINHANH.OUT","w",stdout);
}
int main(){
	READFILE();
	cin>>n;
	ll sum=0;
	for(ll i=0;i<n;i++){
		ll x;cin>>x;
		sum+=x;
		cout<<sum<<" ";
	}

}