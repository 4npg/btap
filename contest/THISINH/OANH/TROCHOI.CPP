#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"

int main() {
	void readfile(){
		freopen("TROCHOI.inp","r",stdin);
		freopen("TROCHOI.out","w",stdout);
	}
	fast;
	ll n; cin >> n;
	ll a[n]; ll b[n];
	for (ll i = 0; i < n; i++) cin>>a[i];
		for (ll i = 0; i < n; i++) cin>>b[i];

	ll sum = 0;
	sort(a,a+n);
	sort(b,b+n);
	ll i = 0; ll j = n-1;
	ll minr = 1e9;
	while (i<n && j>=0) {
		minr = min (abs(a[i]+b[j]),minr);
		if (a[i]+b[j]<0) i++;
			else j--;
	}
	cout << minr;
}