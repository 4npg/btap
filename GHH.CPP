#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
ll sumn(ll n){
	ll sum=0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			sum+=i;
			if(n/i!=i)sum+=(n/i);
		}
	}
	return sum;
}
void READFILE(){
	freopen("GHH.inp","r",stdin);
	freopen("GHH.out","w",stdout);
}
int main(){
	fast;READFILE();
	ll t;cin>>t;
	while(t){
		ll n;cin>>n;
		cout<<(bool)(2*n<=sumn(n))<<endl;
		t--;
	}
}