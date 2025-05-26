#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
void readfile(){
	freopen("NTO.INP","r",stdin);
	freopen("NTO.OUT","w",stdout);
}
ll sum(ll n) {
	ll s=0; 
	for (ll i = 1; i*i<=n; i++) {
		if (n%i==0) {
			s++;
		if (n/i!=i) s++;
	}
}
	return s;
}
void ts(ll n) {
	for (ll i = 2; i*i <= n; i++) {
			while (n%i==0) {
				n/=i;	cout << i;
				if (n>=i) cout << "*";
		}
	}
	if (n>1) cout << n;
}

int main () {
	readfile();
	fast;
	ll t; cin >> t;
	ll m[t];
	for (ll i=0; i<t; i++) {
		cin >> m[i];
		cout << sum(m[i]) << " ";
		ts(m[i]); cout << endl;
	}

}