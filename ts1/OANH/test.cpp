#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'

int main () {
	ll n; cin >>n;
	for (ll i = 2; i*i <= n; i++) {
			while (n%i==0) {
				n/=i;	cout << i;
				if (n>=i) cout << "*";
		}
	}
	if (n>1) cout << n;
}