#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("NOINHANH.INP","r",stdin);
    freopen("NOINHANH.OUT","w",stdout);
    ll n;cin>>n;
    vector<ll>a(n+1);
    a[0]=0;
    for(ll i=1;i<n+1;i++) cin>>a[i];
    for(ll i=1;i<n+1;i++) a[i]=a[i]+a[i-1];
    for(ll i=1;i<n+1;i++) cout<<a[i]<<" ";
    return 0;
}
