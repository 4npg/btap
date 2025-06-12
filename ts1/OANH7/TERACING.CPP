#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
// const ll maxn = 1e9;

int main() {
	fast;
	freopen("TERACING.inp","r",stdin);
	freopen("TERACING.out","w",stdout);
	unordered_map<ll, ll> fl;
	ll n,k; cin >> n >> k;
	ll a[n];
	for (ll i =0 ; i<n; i++) {
		cin >> a[i];
		fl[a[i]]++;
	}
	sort(a,a+n);
	ll i = 0; ll d = 0;
	while (i<n) {
		if (fl[a[i]+k] > 0) d+=(fl[a[i]] * fl[a[i]+k]);
		if (fl[a[i]] > 1)  i+=fl[a[i]];
		else i++;
	}
	cout << d;
}