#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
int n=4;
int dx[2] = {1,0};
int dy[2] = {0,1};
int64 a[100][100];
int64 ans; 

void Try(int x,int y,int64 sum){
    if(x==n-1&&y==n-1){
        ans = max(ans,sum+a[x][y]);
        return;
    }

    FOR(d,0,1){
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(nx<n&&ny<n){
            Try(nx,ny,sum+a[x][y]);
        }
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    FOR(i,0,n-1){
        FOR(j,0,n-1)cin>>a[i][j];
    }
    Try(0,0,0);
    cout<<ans;
}


