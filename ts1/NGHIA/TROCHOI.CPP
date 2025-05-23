#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sub1(ll n){
    ll nn=LLONG_MAX;
    vector<ll>ds(n);
    vector<ll>ds1(n);
    for(ll i=0;i<n;i++)cin>>ds[i];
    for(ll i=0;i<n;i++)cin>>ds1[i];
    for(ll i=0;i<ds.size();i++){
        for(ll j=0;j<ds1.size();j++){
            if(ds[i]+ds1[j]<nn)nn=abs(ds[i]+ds[j]);
        }
    }
    cout<<nn;
}
void sub2(ll n){
    vector<ll>ds(n);
    vector<ll>ds1(n);
    for(ll i=0;i<n;i++)cin>>ds[i];
    for(ll i=0;i<n;i++)cin>>ds1[i];
    sort(ds.begin(),ds.end());
    sort(ds1.rbegin(),ds1.rend());
    ll a=abs(ds[0]+ds1[0]);
     sort(ds.rbegin(),ds.rend());
    sort(ds1.begin(),ds1.end());
    ll b=abs(ds[0]+ds1[0]);
    cout<<min(a,b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("TROCHOI.INP","r",stdin);
    freopen("TROCHOI.OUT","w",stdout);
  ll n;
   cin>>n;
   if(n<1e3+5)sub1(n);
   else sub2(n);
    return 0;
}