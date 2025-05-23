#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define pb push_back
#define ALL(a) (a).begin(),(a).end()
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL

#ifdef LOCAL
  #define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
  #define dbg(x) do {} while(0)
#endif

const ll maxn =1e7;

ll d[maxn];
void sang(){
    d[0]=d[1]=1;
    for(ll i=2;i*i<maxn;i++){
        if(d[i]==0)for(ll j=i*i;j<maxn;j+=i)d[j]=1;
    }
}
bool xuli(ll n){
    vector<ll>dg;
    while(n){
        dg.pb(n%10);n/=10;
    }
    reverse(ALL(dg));
    if(dg.size()<2)return false;
    if(dg.size()==2){
        return dg[0]!=dg[1];
    }
    ll huong = dg[1]-dg[0];
    if(huong==0)return false;
    FOR(i,2,dg.size()-1){
        ll dif = dg[i]-dg[i-1];
        if(dif==0||dif*huong>0)return false;
        huong=dif;
    }
    return true;
}
bool xuli2(ll n){
    string str = to_string(n);
    if(str.size()<2)return false;
    if(str.size()==2)return (bool)(str[0]!=str[1]);
    ll huong = (ll)(str[1]-str[0]);
    if(huong==0)return false;
    FOR(i,2,str.size()-1){
        ll dif = (ll)(str[i]-str[i-1]);
        if(dif==0||dif*huong>0)return false;
        huong=dif;
    }
    return true;
}
int32_t main() {
    fast;
     
    ll n;cin>>n;ll cnt=0;
    sang();
    while(n--){
        ll x;cin>>x;
        if(d[x]==0){
            if(xuli(x)){
                cnt++;
                cout<<x<<" ";
            }
        }
    }
    cout<<endl<<cnt;

}


