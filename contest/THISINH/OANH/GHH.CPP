#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
ll sum ( ll a) {
	ll res = a;
	for (ll i = 1; i<=a/2; i++){
		if (a%i==0) res+=i;
	}
	return res;
}
#define endl "\n"
void readfile(){
	freopen("GHH.inp","r",stdin);
	freopen("GHH.out","w",stdout);
}
int main () {
	fast;
	readfile();
	ll n; cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}	
	for (ll i = 0; i < n; i++) {
		if ( (2*a[i]) <= sum(a[i]) ) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
	
}