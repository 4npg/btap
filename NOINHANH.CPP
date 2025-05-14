#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
=======
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
>>>>>>> 631e376b7f41c47ebf7e787106da083845c5358f
#define ll long long 
// const int maxn = 1e6;
// int a[maxn];
ll n;
void READFILE(){
	freopen("NOINHANH.INP","r",stdin);
	freopen("NOINHANH.OUT","w",stdout);
}
int main(){
<<<<<<< HEAD
	READFILE();
=======
	fast;
>>>>>>> 631e376b7f41c47ebf7e787106da083845c5358f
	cin>>n;
	ll sum=0;
	for(ll i=0;i<n;i++){
		ll x;cin>>x;
		sum+=x;
		cout<<sum<<" ";
	}

}