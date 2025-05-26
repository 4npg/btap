#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    freopen("NOINHANH.INP","r",stdin);
    freopen("NOINHANH.OUT","w",stdout);
    ll n;cin>>n;
    vector<ll>ds(n);
    vector<ll>pre(n+1,0);
    for(ll i=0;i<n;i++){
            cin>>ds[i];
    }
    cout<<ds[0]<<" ";
    for(ll i=1;i<n+1;i++){
        pre[i]=pre[i-1]+ds[i-1];
    }
    for(ll i=2;i<n+1;i++)cout<<pre[i]<<" ";
    return 0;
}