#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

int main() {
	fast;
	freopen("MULTIPLE.inp","r",stdin);
	freopen("MULTIPLE.out","w",stdout);	
	ll n,q,af,res;
	af = 1; res = 1;
	cin >> n; cin >> q;
	for (ll i = 1; i <n; i++) {
		af*=q%2023;
		res += af;
	}
	cout << res%2023;
	// cout << ((1-pow(q,n))/(1-q));
}