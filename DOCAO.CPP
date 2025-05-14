#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
ll sum(ll n){
	ll t=0;
	while(n){
		t+=n%10;
		n/=10;
	}
	return t;
}
const ll maxn = 1e7;

ll d[maxn];

void sang(){
	d[0]=d[1]=1;
	for(ll i=2;i*i<maxn;i++){
		if(d[i]==0){
			for(ll j =i*i;j<maxn;j+=i){
				d[j]=1;
			}
		}
	}
}
void READFILE(){
	freopen("DOCAO.inp","r",stdin);
	freopen("DOCAO.out","w",stdout);
}
int main(){
	fast;READFILE();
	ll n,h;cin>>n>>h;
	sang();
	ll cnt=0;
	for(ll i=2;i<=n;i++){
		if(d[i]==0&&sum(i)==h){
			cout<<i<<endl;
			cnt++;
		}
	}
	cout<<cnt;
}