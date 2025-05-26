#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e6+5;
int main() {
    freopen("NTO.INP","r",stdin);
    freopen("NTO.OUT","w",stdout);
    vector<ll>ds(maxn);
       for (ll i=1; i<maxn;i++){
            for (ll j=i;j<maxn;j+=i) {
                ds[j]++;
            }
        }
    ll n;cin>>n;
    while(n--){
        ll a;cin>>a;
        cout<<ds[a]<<" ";
        for(ll i=2;i*i<=a;i++){
            while(a%i==0){
                a/=i;
                cout<<i;
                if(a>1)cout<<'*';
            }
        }
        if(a>1)cout<<a;
        cout<<'\n';
    }
    return 0;
}