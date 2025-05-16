#include <bits/stdc++.h>
#define N 3000005
#define pii pair<int,int>
#define ll long long
using namespace std;
int c[N],a[N];
int m,n;
ll ans;

void sub12()
{
    map <int,int> Ma, Mb;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=m; i++)
    {
        int x;
        cin >> x;
        Mb.insert(pii(x,1));
    }
    int pp, p;
    for (int i=1; i<=n; i++)
    {
        map <int,int> :: iterator it = Mb.find(a[i]);
        if (it == Mb.end())
        {
            cout << a[i] << " ";
            Ma[a[i]]++;
            //ans = max(ans,a[i]*1LL*Ma[a[i]]*1LL);
            if (ans < a[i]*1LL*Ma[a[i]]*1LL)
            {
                ans = a[i]*1LL*Ma[a[i]]*1LL;
                pp = a[i];
                p = Ma[a[i]];
            }
        }
    }
    cout << '\n' << ans;
    cout << '\n' << pp << " " << p;
}

void sub3()
{
    map <int,int> Ma;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=m; i++)
    {
        int x;
        cin >> x;
        c[x] = 1;
    }
    for (int i=1; i<=n; i++)
    if (c[a[i]] == 0)
    {
        cout << a[i] << " ";
        Ma[a[i]]++;
        ans = max(ans,a[i]*1LL*Ma[a[i]]*1LL);
    }
    cout << '\n' << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thuong.inp","r",stdin);
    freopen("thuong.out","w",stdout);
    cin >> n >> m;
    if (n <= 100000 && m <= 100000) sub12();
    else sub3();
    return 0;
}
