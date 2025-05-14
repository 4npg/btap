#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)

bool nto(ll n){
    if(n<2)return false;
    for(ll i=2;i*i<=n;i++)if(n%i==0)return false;
        return true;
}
bool xuli(ll n){
    ll s=0;
    if(!nto(n))return false;
    else{
        while(n){
            s+=n%10;
            if(n%10!=2&&n%10!=3&&n%10!=5&&n%10!=7)return false;
            n/=10;
        }
    }
    if(!nto(s))return false;
    return true;
}
int main(){
    fast;
    ll a,b;cin>>a>>b;
    ll cnt=0;
    for(ll i=a;i<=b;i++)if(xuli(i)&&nto(i))cnt++;
        cout<<cnt;
} 