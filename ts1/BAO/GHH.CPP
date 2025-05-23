//bacgianganbeo1
#include<iostream>
#include<vector>
using namespace std;
int main()
{   freopen("GHH.INP","r",stdin);
    freopen("GHH.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n;
        vector<int> s(1000001);
        fill(s.begin(),s.end(),0);
        for(int i=1;i<=1000001;++i)
            for(int j=i;j<=1000001;j+=i)
                s[j]+=i;
            while(n--)
            {
                cin>>x;
                if(x*2<=s[x])
                    cout<<1<<'\n';
                else
                    cout<<0<<'\n';
            }
}