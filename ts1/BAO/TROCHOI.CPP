//bacgianganbeo3
#include<iostream>
using namespace std;
int main()
{
    freopen("TROCHOI.INP","r",stdin);
    freopen("TROCHOI.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    long long res=9223372036854775807,an[n],bn[n];
    if(n<=1000)
    {
        for(int i=0;i<n;i++)
            cin>>an[i];
        for(int i=  0;i<n;i++)
        {
            cin>>bn[i];
            for(int j=0;j<n;j++)
                res=(res>abs(bn[i]+an[j])?abs(bn[i]+an[j]):res);
        }
        cout<<res;
    }
    else
    {
        int minan=1000000000,maxan=-1000000000;
        for(int i=0;i<n;i++)
        {
            cin>>an[i];
            minan=(minan>an[i]?an[i]:minan);
            maxan=(maxan>an[i]?maxan:an[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>bn[i];
            res=(res>abs(bn[i]+minan)?abs(bn[i]+minan):res);
            res=(res>abs(bn[i]+maxan)?abs(bn[i]+maxan):res);
        }
        cout<<res;
    }
}