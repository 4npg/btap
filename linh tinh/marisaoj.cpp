// authur : anphung iu bcu
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
#define pb push_back
#define pob pop_back

const int maxn = 10000;
int a[maxn][maxn];
int col_sum[maxn];
int32_t main() {
    fast;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>a[i][j];
    	}
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		col_sum[j] += a[i][j];
    	}
    }
    for(int i=0;i<m;i++){
    	cout<<col_sum[i]<<" ";
    }
}


