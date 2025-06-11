#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("THUONG.INP","r",stdin);
    freopen("THUONG.OUT","w",stdout);
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        for(ll j=0;j<n;j++)
            if(a[j]==x) a[j]=0;
    }
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++)
        if(a[i]!=0)
        {
            b.push_back(a[i]);
        }
    for(ll i=0;i<b.size();i++) cout<<b[i]<<" ";
    cout<<"\n";
    for(ll i=0;i<b.size();i++)
        mp[b[i]]++;
    vector<ll>c;
    for(auto i:mp)
        c.push_back(i.first*i.second);
    sort(c.rbegin(),c.rend());
    cout<<c[0];
    return 0;
}
