#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gt(ll n){
    ll tich=1;
    for(ll i=1;i<=n;i++)tich*=i;
    return tich;
}
int main () {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	freopen("DUONGDI.INP","r",stdin);
    freopen("DUONGDI.OUT","w",stdout);
	ll n;cin>>n;
	cout<<gt(2*n-2)/(gt(n-1)*gt(n-1));
}