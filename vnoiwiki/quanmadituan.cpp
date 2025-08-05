// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "quanmadituan"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)


int n,m;
int a[8][8];
int dx[]={1,-1,-2,2,-2,2,-1,1};
int dy[]={2,2,1,1,-1,-1,-2,-2};

void Try(int cnt,int x,int y){
    if(cnt==n*m){
        FOR(i,1,n){
            FOR(j,1,m){
                cout<<a[i][j]<<" ";
            }
            el;
        }
        exit(0);
    }
    FOR(i,0,7){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>0&&ny>0&&nx<=n&&ny<=m&&a[nx][ny]==0){
            a[nx][ny] = cnt+1;
            Try(cnt+1,nx,ny);
            a[nx][ny] = 0;
        }
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n>>m;
    memset(a,0,sizeof(a));
    // FOR(i,0,7){
    //     cout<<a[i]<<" ";
    // }
    a[1][1] = 1;
    Try(1,1,1);
}


