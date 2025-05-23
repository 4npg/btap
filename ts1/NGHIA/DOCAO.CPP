#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e7+5;
bool nt[maxn];
void sangnt(ll n){
    for(ll i=2;i<=n;i++)nt[i]=1;
    for(ll i=2;i*i<=n;i++){
        if(nt[i]){
            for(ll j=i*i;j<=n;j+=i)nt[j]=0;
        }
    }
}
ll tcs(ll n){
    ll tong=0;
    while(n>0){
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int main() {
    sangnt(maxn);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("DOCAO.INP","r",stdin);
    freopen("DOCAO.OUT","w",stdout);
    ll n,k;cin>>n>>k;
    ll dem=0;
    for(ll i=2;i<=n;i++){
        if(nt[i]){
            if(tcs(i)==k){
                    cout<<i<<'\n';
                    dem++;
            }
        }
    }
    cout<<dem;
    return 0;
}