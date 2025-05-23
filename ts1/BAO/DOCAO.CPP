//bacgianganbeo2
#include<iostream>
using namespace std;
int n,h,c=0;
int scs(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
void READFILE(){
    freopen("DOCAO.INP","r",stdin);
    freopen("DOCAO.OUT","w",stdout);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    READFILE();
    int n,h,c=0;
    cin>>n>>h;
    bool dssnt[1000001];
    fill(dssnt,dssnt+1000000,true);
    dssnt[0]=dssnt[1]=false;
    for(int i=2;i*i<1000000;i++)
        if(dssnt[i])
        {
            if(scs(i)==h&&i<=n)
            {
                cout<<i<<'\n';
                c++;
            }
            for(int j=i*i;j<=1000000;j+=i)
                dssnt[j]=false;
        }
    cout<<c;
}