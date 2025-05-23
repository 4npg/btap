#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tu(ll n){
    ll tong=0;
    for(ll i=1;i*i<n;i++){
        if(n%i==0){
            tong+=i;
            if(n/i!=i)tong+=n/i;
        }
    }
    return tong;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("GHH.INP","r",stdin);
    freopen("GHH.OUT","w",stdout);
    ll n;cin>>n;
    while(n--){
        ll a;cin>>a;
        if(2*a<=tu(a))cout<<1<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}