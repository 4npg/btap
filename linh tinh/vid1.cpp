#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
# define pb push_back
# define ins insert
# define ll long long
# define st string
# define endl "\n"
# define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
bool prm(ll n){
    if(n<=1)return 0;
    if(n==2||n==3)return 1;
    if(n%2==0||n%3==0)return 0;
    for(ll i=6;(i-1)*(i-1)<=n;i+=6){
        if(n%(i-1)==0||n%(i+1)==0)return 0;
    }
    return 1;
}
const ll maxn = 1e7*1LL;
ll d[maxn];
void sang(){
    d[0] = d[1] = 1;
    for(ll i=2;i*i<maxn;i++){
        if(d[i]==0)
        for(ll j=i*i;j<maxn;j+=i){
            d[j] =1;
        }
    }
}
void sanguocntomin(){
    for(ll i=2;i<maxn;i++){
        if(d[i]==0)for(ll j=i*2;j<maxn;j+=i){
            if(d[j]==0)d[j]=i;
        }
    }
}
ll x[20],y[20],cnt;
void egcd(ll a,ll b){
    if(b==0){
        x[0]=1;
        y[0]=0;
        return;
    } 
    egcd(b,a%b);
    cnt++;
    x[cnt] = y[cnt-1];
    y[cnt] = x[cnt-1] - a/b*y[cnt-1];
    cout<<a<<" "<<b<<" "<<x[cnt]<<" "<<y[cnt]<<" "<<a*x[cnt]+b*y[cnt]<<"\n";

    // if(b==0){
    //     x=1;
    //     y=0;
    //     return;
    // }
    // egcd(b,a%b);
    // ll temp = x;
    // x = y;
    // y = temp - a/b * y;
    // cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<a*x+b*x<<"\n";

}


ll phi(ll n){
    ll ans = n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ans-=ans/i;
            while(n%i==0)n/=i;
        }
    }
    if(n>1){
        ans-=ans/n;
    }
    return ans;
}

void phisang(){
    for(ll i=2;i<maxn;i++){
        if(d[i]==i){
            for(ll j=i;j<maxn;j+=i){
                d[j]-=d[j]/i;
            }
        }
    }
}
int main(){
    fast;
    egcd(240,46);
    
}    