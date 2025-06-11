#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll demuoc (ll n)
{
    ll c=0;
    for(ll i=1;i*i<=n;i++)
        if(n%i==0)
    {
        c++;
        if(n/i!=i) c++;
    }
    return c;
}
int main()
{
    freopen("NTO.INP","r",stdin);
    freopen("NTO.OUT","w",stdout);
    ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        cout<<demuoc(a[i])<<" ";
        for(ll j=2;j*j<=a[i];j++)
            while(a[i]%j==0)
        {
            a[i]/=j;cout<<j;
            if(a[i]>1) cout<<"*";
        }
        if(a[i]>1) cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
