#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
const ll maxn = 1e7;
ll snt[maxn];
ll d = 0;

void sang(){
	snt[0] = snt[1] = 1;
	for (ll i = 2; i*i<maxn; i++){
		if (snt[i]==0)
			for (ll j = i*i; j<maxn; j+=i) snt[j]=1;
	}
}

int main() {
	fast;
	freopen("PAIRPBRO.inp","r",stdin);
	freopen("PAIRPBRO.out","w",stdout);

	sang();
	ll n; ll k;
	cin >> n; cin >> k;
	ll i = 2;
	while ((i+k)<=n) {
		if ((snt[i]==0)&&(snt[i+k]==0)) d++;
		i++;
	}
	cout << d;
}