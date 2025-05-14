#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll maxn = 1e7;
ll d[maxn];

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void sang() {
	d[0]=d[1]=1;
	for (ll i = 2; i*i < maxn; i++) {
		if (d[i]==0){
			for (ll j = i*i; j < maxn ; j+=i){
				d[j] = 1;
			}
		}
	}
}

ll sum(ll a) {
	ll res = 0;
	while ( a) {
		res+=(a%10);
		a/=10;
	}
	return res;
}

void readfile(){
	freopen("DOCAO.inp","r",stdin);
	freopen("DOCAO.out","w",stdout);
}
#define endl "\n"

int main () {
	fast;
	READFILE();
	ll n; cin >> n;
	ll h; cin >> h;
	sang();
	int dem = 0;
	for (ll i = 2; i <= n; i++) {
		if (  (d[i]==0 && sum(i)==h) ){
			dem++;
			cout<<i<<endl;
		}
	}
	cout << dem;
}