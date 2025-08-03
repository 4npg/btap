// author : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;

#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define all(a) (a).begin(),(a).end()

int n,m,q;
vector<vector<int64>> a;
vector<int64> row_sum, col_sum;
vector<int> row_index;

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    cin>>n>>m>>q;
    a.assign(n,vector<int64>(m));
    row_sum.assign(n,0);
    col_sum.assign(m,0);
    row_index.resize(n);
    iota(all(row_index),0);

    FOR(i,0,n-1) FOR(j,0,m-1) {
        cin>>a[i][j];
        row_sum[i]+=a[i][j];
        col_sum[j]+=a[i][j];
    }

    while(q--) {
        char tt; cin>>tt;
        if(tt=='1') {
            int i,j; cin>>i>>j; --i,--j;
            swap(row_index[i],row_index[j]);
            swap(row_sum[i],row_sum[j]);
        }
        else if(tt=='2') {
            int i,j; int64 x;
            cin>>i>>j>>x; --i,--j;
            int real_i=row_index[i];
            int64 diff=x-a[real_i][j];
            a[real_i][j]=x;
            row_sum[i]+=diff;
            col_sum[j]+=diff;
        }
        else if(tt=='r') {
            int i; cin>>i; --i;
            cout<<row_sum[i]; el;
        }
        else if(tt=='c') {
            int i; cin>>i; --i;
            cout<<col_sum[i]; el;
        }
    }

    FOR(i,0,n-1) {
        int real_i=row_index[i];
        FOR(j,0,m-1) cout<<a[real_i][j]<<" ";
        el;
    }
}
